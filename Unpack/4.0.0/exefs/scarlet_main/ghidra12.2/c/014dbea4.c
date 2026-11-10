/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014dbea4; name: FUN_014dbea4
 */


void FUN_014dbea4(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  short sVar3;
  undefined2 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)(param_1 + 0x48);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x2420);
  if (*(byte *)(lVar7 + 0x2420) != 0) {
    uVar9 = 0;
    lVar10 = 8;
    do {
      puVar1 = (undefined4 *)(lVar7 + lVar10);
      if ((uint)uVar8 <= ((uint)uVar9 & 0xff)) {
        puVar1 = (undefined4 *)0x0;
      }
      if ((puVar1[1] == 1) && (sVar3 = *(short *)(puVar1 + 4), sVar3 != 0)) {
        plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*puVar1);
        uVar2 = *puVar1;
        lVar11 = *(long *)(param_1 + 0x20);
        uVar4 = (**(code **)(*plVar5 + 400))();
        lVar7 = *(long *)(lVar11 + 0x20);
        uVar6 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x30),uVar2);
        uVar8 = FUN_0129b2a0(*(undefined8 *)(lVar7 + 0x18),uVar6,sVar3,uVar4);
        if ((uVar8 & 1) != 0) {
          FUN_0129aff0(*(undefined8 *)(lVar11 + 0x18),0x5a,uVar2,sVar3,uVar4);
          uVar6 = FUN_01246e90(param_1);
          FUN_014dc120(uVar6,plVar5,sVar3);
          FUN_014dbfd4(*(undefined8 *)(param_1 + 0x20),uVar2,sVar3);
        }
      }
      lVar7 = *(long *)(param_1 + 0x48);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x8c;
      uVar8 = (ulong)*(byte *)(lVar7 + 0x2420);
    } while (uVar9 < uVar8);
  }
  return;
}


