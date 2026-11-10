/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01469f68; name: FUN_01469f68
 */


char * FUN_01469f68(long param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_2 == param_3) || (*param_2 != '[')) {
    return param_2;
  }
  if (param_2 + 1 != param_3) {
    pcVar2 = param_2 + 2;
    if (param_2[1] != '^') {
      pcVar2 = param_2 + 1;
    }
    uVar1 = FUN_0146a714(param_1,param_2[1] == '^');
    if (pcVar2 != param_3) {
      if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pcVar2 == ']')) {
        FUN_0146ab00(uVar1,0x5d);
        pcVar2 = pcVar2 + 1;
      }
      if (pcVar2 != param_3) {
        do {
          pcVar3 = pcVar2;
          pcVar2 = (char *)FUN_0146a080(param_1,pcVar3,param_3,uVar1);
        } while (pcVar2 != pcVar3);
        if (pcVar3 != param_3) {
          if (*pcVar3 == '-') {
            FUN_0146ab00(uVar1,0x2d);
            pcVar3 = pcVar3 + 1;
          }
          if ((pcVar3 != param_3) && (*pcVar3 == ']')) {
            return pcVar3 + 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_028a63c0();
}


