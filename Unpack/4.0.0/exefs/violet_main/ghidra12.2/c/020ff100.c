/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ff100; name: FUN_020ff100
 */


bool FUN_020ff100(long param_1,undefined4 *param_2,undefined1 *param_3,short *param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  short sVar2;
  short *psVar3;
  ulong uVar4;
  
  if (*(byte *)(param_1 + 0x3a) == 0) {
    return false;
  }
  uVar4 = (ulong)(*(byte *)(param_1 + 0x3a) - 1);
  psVar3 = (short *)(param_1 + uVar4 * 2 + 0x28);
  bVar1 = *psVar3 == 0;
  if (bVar1) {
    sVar2 = 0;
    *param_2 = 5;
    *param_3 = 0;
    *param_5 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + uVar4 * 4 + 4);
    *param_3 = *(undefined1 *)(param_1 + uVar4 + 0x1c);
    *param_5 = *(undefined1 *)(param_1 + uVar4 + 0x34);
    sVar2 = *psVar3;
  }
  *param_4 = sVar2;
  return !bVar1;
}


