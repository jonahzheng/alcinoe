(*$JPPDEFINEMACRO JCLARRAYSETINT(SELFCLASSNAME, COLLECTIONINTERFACENAME, TYPENAME)
@@SELFCLASSNAME
<copy TJclArraySet>
\ \

@@!!MEMBEROVERVIEW_SELFCLASSNAME
<copy !!MEMBEROVERVIEW_TJclArraySet>
\ \

@@SELFCLASSNAME.Add@TYPENAME
<copy TJclArraySet.Add@TObject>
\ \

@@SELFCLASSNAME.AddAll@COLLECTIONINTERFACENAME
<copy TJclArraySet.AddAll@IJclCollection>
\ \

@@SELFCLASSNAME.Contains@TYPENAME
<copy TJclArraySet.Contains@TObject>
\ \

@@SELFCLASSNAME.Insert@Integer@TYPENAME
<copy TJclArraySet.Insert@Integer@TObject>
\ \

@@SELFCLASSNAME.CreateEmptyContainer
<copy TJclArraySet.CreateEmptyContainer>
\ \

@@SELFCLASSNAME.Intersect@COLLECTIONINTERFACENAME
<copy TJclArraySet.Intersect@IJclCollection>
\ \

@@SELFCLASSNAME.Subtract@COLLECTIONINTERFACENAME
<copy TJclArraySet.Subtract@IJclCollection>
\ \

@@SELFCLASSNAME.Union@COLLECTIONINTERFACENAME
<copy TJclArraySet.Union@IJclCollection>
\ \
*)
(*$JPPLOOP TRUETYPEINDEX HELPTRUETYPECOUNT
{$JPPEXPANDMACRO JCLARRAYSETINT(,,)}
*)

