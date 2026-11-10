/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dbae24; name: FUN_00dbae24
 */


void FUN_00dbae24(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong *puVar8;
  dword *local_a8;
  ulong uStack_a0;
  ulong local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  long local_80 [4];
  undefined4 local_60;
  uint local_58 [2];
  
  if (*(int *)(param_1 + 0x248) != 0) {
    puVar8 = *(ulong **)(param_1 + 0x240);
    lVar7 = (long)*(int *)(param_1 + 0x248) * 0x18;
    do {
      lVar5 = *(long *)(param_1 + 0x18);
      uVar4 = *puVar8;
      if ((long)uVar4 < 0) {
        uVar6 = (uint)uVar4;
      }
      else {
        uVar4 = FUN_00dbb6c8(lVar5 + 0x960,uVar4,local_80);
        uVar6 = (uint)local_80[0];
        if ((uVar4 & 1) == 0) {
          uVar6 = 0xffffff;
        }
      }
      uVar1 = uVar6 & 0xffffff;
      if ((((uVar1 != 0xffffff) && (uVar1 < *(uint *)(lVar5 + 0x40))) &&
          ((*(byte *)(*(long *)(lVar5 + 0x38) + (ulong)uVar1 * 0xc0 + 0x54) & 3) != 0)) &&
         (*(uint *)(*(long *)(lVar5 + 0x38) + (ulong)uVar1 * 0xc0 + 0x50) == uVar6)) {
        lVar5 = *(long *)(param_1 + 0x18);
        local_60 = 0;
        uStack_a0 = *puVar8;
        local_98 = puVar8[1];
        local_a8 = &fde_04000030;
        local_90 = 2;
        local_8c = (undefined1)puVar8[2];
        local_88 = 0xffffffffffffffff;
        uVar4 = *puVar8;
        local_80[0] = lVar5;
        if (uVar4 == 0xffffffffffffffff) {
          uVar2 = FUN_00dbb5e0(*(undefined8 *)(lVar5 + 0x908),0);
        }
        else {
          if ((long)uVar4 < 0) {
            uVar4 = uVar4 & 0xffffffff;
          }
          else {
            uVar3 = FUN_00dbb6c8(lVar5 + 0x960,uVar4,local_58);
            uVar4 = (ulong)local_58[0];
            if ((uVar3 & 1) == 0) {
              uVar4 = 0xffffff;
            }
          }
          uVar2 = FUN_00f64ddc(*(undefined8 *)(lVar5 + 0x908),0,uVar4);
        }
        FUN_00dbb47c(uVar2,local_80,&local_a8);
      }
      puVar8 = puVar8 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x248) = 0;
  return;
}


