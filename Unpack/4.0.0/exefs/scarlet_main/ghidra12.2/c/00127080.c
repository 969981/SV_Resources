/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00127080; name: FUN_00127080
 */


void FUN_00127080(long param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 local_d8 [12];
  undefined4 local_a8;
  long local_58;
  
  pcVar7 = *(code **)(param_1 + 0xa0);
  if (pcVar7 == (code *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0xb) == '\0') {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x30);
  lVar11 = *(long *)(lVar6 + 8);
  if (param_5 == 0) {
    uVar8 = 8;
    bVar3 = *(byte *)(lVar6 + 0x3e);
  }
  else {
    uVar8 = 0x108;
    *(undefined2 *)(lVar6 + 0x38) = param_4;
    *(short *)(lVar6 + 0x3a) = (short)param_5;
    bVar3 = *(byte *)(lVar6 + 0x3e);
  }
  if ((bVar3 >> 1 & 1) == 0) {
    uVar5 = *(ulong *)(lVar6 + 8);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (*(ulong *)(param_1 + 0x10) < uVar5) {
      *(ulong *)(param_1 + 0x10) = uVar5;
      uVar4 = uVar5;
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x10);
  }
  local_d8[0] = param_2;
  local_a8 = param_3;
  local_58 = lVar6;
  if ((long)(*(long *)(param_1 + 0x28) - uVar4) < 0x150) {
    uVar5 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30);
    if (1000000 < (int)(uVar5 >> 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00126bd0(param_1,5);
    }
    uVar2 = (uint)(uVar5 >> 3) & 0xfffffffe;
    uVar1 = (int)(uVar4 - *(long *)(param_1 + 0x30) >> 4) + 0x14;
    if (999999 < (int)uVar2) {
      uVar2 = 1000000;
    }
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
    if (1000000 < (int)uVar1) {
      FUN_00126ce0(param_1,0xf4308,1);
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"stack overflow");
    }
    FUN_00126ce0(param_1,uVar1,1);
    uVar4 = *(ulong *)(param_1 + 0x10);
  }
  if (*(ulong *)(lVar6 + 8) < uVar4 + 0x140) {
    *(ulong *)(lVar6 + 8) = uVar4 + 0x140;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(ushort *)(lVar6 + 0x3e) = *(ushort *)(lVar6 + 0x3e) | uVar8;
  (*pcVar7)(param_1,local_d8);
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(long *)(lVar6 + 8) = *(long *)(param_1 + 0x30) + (lVar11 - lVar10);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x30) + (lVar9 - lVar10);
  *(ushort *)(lVar6 + 0x3e) = *(ushort *)(lVar6 + 0x3e) & (uVar8 ^ 0xffff);
  return;
}


