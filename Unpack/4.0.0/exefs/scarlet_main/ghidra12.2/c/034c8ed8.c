/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c8ed8; name: FUN_034c8ed8
 */


undefined8
FUN_034c8ed8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_4 + 8);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  cVar2 = *(char *)(param_4 + 0x18);
  *(int *)(param_1 + 0x10) = (int)uVar1;
  *(ulong *)(param_1 + 8) = uVar5;
  *(short *)(param_1 + 0x14) = (short)((ulong)uVar1 >> 0x20);
  uVar4 = *(uint *)(param_5 + 4);
  uVar3 = uVar4 >> 8 & 0xf;
  if (uVar3 < 4) {
    if (((uVar4 & 0xf00) != 0x300) && ((uVar4 & 0xff) != 0 || uVar3 == 3)) {
      uVar5 = (ulong)uVar4;
      *(uint *)(param_1 + 8) = uVar4;
    }
  }
  uVar4 = (uint)uVar5;
  if ((uVar4 & 0xfffff000) != 0x4000 && cVar2 != '\0') {
    uVar4 = 0x300;
  }
  *(uint *)(param_5 + 4) = uVar4;
  return 1;
}


