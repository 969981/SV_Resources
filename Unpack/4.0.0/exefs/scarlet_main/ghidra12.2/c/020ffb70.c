/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ffb70; name: FUN_020ffb70
 */


void FUN_020ffb70(long param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  bVar1 = FUN_00f7e274(*(undefined8 *)(param_1 + 0x208));
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      if (((uint)uVar4 & 0xff) < (uint)*(byte *)(*(long *)(param_1 + 0x208) + 0x30)) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar4 * 8);
      }
      else {
        uVar3 = 0;
      }
      bVar2 = FUN_020ffc00(param_1,uVar3);
      *(byte *)((long)param_2 + uVar4 + 8) = bVar2 & 1;
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  *param_2 = *(undefined8 *)(param_1 + 0x208);
  return;
}


