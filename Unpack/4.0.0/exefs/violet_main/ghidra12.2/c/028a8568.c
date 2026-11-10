/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a8568; name: FUN_028a8568
 */


char * FUN_028a8568(long param_1,char *param_2,char *param_3,long param_4)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      while (cVar1 != ':') {
        if (param_3 + -2 == pcVar3) goto LAB_028a85f0;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      if (pcVar3[1] == ']') {
        if (pcVar3 != param_3) {
          uVar2 = FUN_028a8e74(param_1,param_2,pcVar3,*(uint *)(param_1 + 0x18) & 1,0);
          if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_028a8ff0();
          }
          *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | uVar2;
          return pcVar3 + 2;
        }
        break;
      }
      pcVar3 = pcVar3 + 1;
    } while (param_3 + -1 != pcVar3);
  }
LAB_028a85f0:
                    /* WARNING: Subroutine does not return */
  FUN_028a63c0();
}


