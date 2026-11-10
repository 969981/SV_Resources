/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00792f30; name: FUN_00792f30
 */


void FUN_00792f30(long *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0078ce18();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)PTR_DAT_047d0970;
    do {
      uVar2 = FUN_0078ce3c(param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = FUN_0078cdcc(param_1);
        if (iVar1 != 2) {
          return;
        }
        break;
      }
      FUN_007ca35c((long)(lVar3 * (param_2 & 0xffffffff)) / 1000);
      uVar2 = FUN_0078ce18(param_1);
    } while ((uVar2 & 1) == 0);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  *(undefined1 *)(param_1 + 9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00792fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}


