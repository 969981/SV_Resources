/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f94cc0; name: FUN_02f94cc0
 */


void FUN_02f94cc0(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_90 [48];
  
  do {
    uVar7 = *(ulong *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x60 + 8);
    iVar3 = param_3;
    iVar5 = param_2;
    do {
      lVar6 = (long)iVar5 * 0x60;
      do {
        iVar8 = iVar5;
        lVar2 = param_1 + lVar6;
        lVar6 = lVar6 + 0x60;
        iVar5 = iVar8 + 1;
      } while (*(ulong *)(lVar2 + 8) < uVar7);
      lVar2 = (long)iVar3 * 0x60;
      iVar3 = iVar3 + 1;
      do {
        iVar4 = iVar3;
        lVar1 = param_1 + lVar2;
        lVar2 = lVar2 + -0x60;
        iVar3 = iVar4 + -1;
      } while (uVar7 < *(ulong *)(lVar1 + 8));
      iVar5 = iVar8;
      if (iVar8 <= iVar3) {
        if (iVar8 != iVar3) {
          lVar2 = param_1 + lVar2;
          memcpy(auStack_90,(void *)(lVar2 + 0x60),0x30);
          uVar15 = *(undefined8 *)(lVar2 + 0x98);
          uVar14 = *(undefined8 *)(lVar2 + 0x90);
          lVar6 = param_1 + lVar6;
          uVar12 = *(undefined8 *)(lVar2 + 0xa8);
          uVar9 = *(undefined8 *)(lVar2 + 0xa0);
          uVar13 = *(undefined8 *)(lVar2 + 0xb8);
          uVar10 = *(undefined8 *)(lVar2 + 0xb0);
          memcpy((void *)(lVar2 + 0x60),(void *)(lVar6 + -0x60),0x28);
          uVar11 = *(undefined8 *)(lVar6 + -0x30);
          *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar6 + -0x28);
          *(undefined8 *)(lVar2 + 0x90) = uVar11;
          uVar11 = *(undefined8 *)(lVar6 + -0x20);
          *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar6 + -0x18);
          *(undefined8 *)(lVar2 + 0xa0) = uVar11;
          uVar11 = *(undefined8 *)(lVar6 + -0x10);
          *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar6 + -8);
          *(undefined8 *)(lVar2 + 0xb0) = uVar11;
          memcpy((void *)(lVar6 + -0x60),auStack_90,0x28);
          *(undefined8 *)(lVar6 + -0x28) = uVar15;
          *(undefined8 *)(lVar6 + -0x30) = uVar14;
          *(undefined8 *)(lVar6 + -0x18) = uVar12;
          *(undefined8 *)(lVar6 + -0x20) = uVar9;
          *(undefined8 *)(lVar6 + -8) = uVar13;
          *(undefined8 *)(lVar6 + -0x10) = uVar10;
        }
        iVar3 = iVar4 + -2;
        iVar5 = iVar8 + 1;
      }
    } while (iVar5 <= iVar3);
    if (param_2 < iVar3) {
      FUN_02f94cc0(param_1,param_2,iVar3);
    }
    param_2 = iVar5;
  } while (iVar5 < param_3);
  return;
}


