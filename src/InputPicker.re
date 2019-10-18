
type dataItemType = {
    value: string,
    label: React.element,
    children: array(dataItemType),
    groupBy: string
  };
  
  [@bs.module "rsuite"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~menuStyle: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~block: bool=?,
      ~cleanable: bool=?,
      ~container: Dom.element=?, // TODO
      ~creatable: bool=?,
      ~disabled: bool=?,
      ~preventOverflow: bool=?,
      ~searchable: bool=?,
      ~data: array(dataItemType)=?,
      ~defaultValue: string=?,
      ~disabledItemValues: string=?,
      ~groupBy: string=?,
      ~labelKey: string=?,
      ~value: string=?,
      ~valueKey: string=?,
      ~menuClassName: string=?,
      ~maxHeight: int=?,
      ~onChange: (string, ReactEvent.Synthetic.t) => unit=?,
      ~onOpen: unit => unit=?,
      ~onClose: unit => unit=?,
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~onSelect: (string, dataItemType, ReactEvent.Synthetic.t) => unit=?,
      ~onClean: (ReactEvent.Synthetic.t) => unit=?,
      ~onGroupTitleClick: (ReactEvent.Synthetic.t) => unit=?,
      ~placeholder: React.element=?,
      ~renderMenu: React.element => React.element=?,
      ~renderMenuGroup: (React.element, dataItemType) => React.element=?,
      ~renderMenuItem: (React.element, dataItemType) => React.element=?,
      ~renderValue: (string, dataItemType, React.element) => React.element=?,
      ~renderExtraFooter: unit => React.element=?,
      ~sort: bool => (string, string) => int=?, // TODO
      ~toggleComponentClass: unit => React.element=?,
      ~size: [@bs.string] [
                    | `lg
                    | `md
                    | `sm
                    | `xs
                  ]
       =?,
    ) =>
    React.element =
    "InputPicker";
  