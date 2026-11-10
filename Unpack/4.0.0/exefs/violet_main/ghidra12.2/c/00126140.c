/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00126140; name: FUN_00126140
 */


void FUN_00126140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s1 = (char *)FUN_0013dfa0();
  __s2 = (char *)FUN_0013dfa0(param_1,param_3);
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00125b90(param_1,"attempt to compare two %s values",__s1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00125b90(param_1,"attempt to compare %s with %s",__s1,__s2);
}


