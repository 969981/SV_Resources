/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0058fb64; name: FUN_0058fb64
 */


void FUN_0058fb64(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x118))(*(long **)PTR_DAT_047cbb08,param_2[2]);
  lVar3 = param_2[1];
  lVar2 = *param_2;
  lVar4 = param_2[2];
  lVar6 = param_2[5];
  lVar5 = param_2[4];
  param_1[0x22] = param_2[3];
  param_1[0x21] = lVar4;
  param_1[0x24] = lVar6;
  param_1[0x23] = lVar5;
  param_1[0x20] = lVar3;
  param_1[0x1f] = lVar2;
  uVar1 = FUN_005905b8(param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0058fbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


