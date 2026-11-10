/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00488a90; name: FUN_00488a90
 */


undefined4 FUN_00488a90(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  code *pcVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0xe8);
  iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
  if (((((lVar11 == 0) || (iVar2 <= param_2)) || (param_2 < 1)) ||
      (((*(uint *)(lVar11 + 0x28) & 5) == 0 || (*(long *)(param_1 + 0xe8) == 0)))) ||
     (((*(byte *)(*(long *)(param_1 + 0xe8) + 0x28) & 5) == 0 ||
      (lVar5 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),param_2), lVar5 == 0)))) {
LAB_00488b24:
    if (param_2 < iVar2) {
      iVar3 = param_2;
      do {
        lVar5 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar3);
        iVar4 = FUN_004899f0(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),0);
        if (iVar4 == 1) goto LAB_00488ce8;
        if (iVar4 == 2) goto LAB_00488c70;
        iVar3 = iVar3 + 1;
      } while (iVar2 != iVar3);
      if (param_2 < iVar2) {
        uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18) & 0x80000;
        uVar9 = 3;
        if (uVar1 != 0) {
          uVar9 = 1;
        }
        if (lVar11 == 0) {
          return uVar9;
        }
        if (uVar1 == 0) {
          return uVar9;
        }
LAB_00488cec:
        iVar2 = FUN_0047e430(*(undefined8 *)(lVar11 + 8));
        if (0 < iVar2) {
          if (*(int *)(lVar11 + 0x30) < 0) {
            *(int *)(lVar11 + 0x30) = param_2;
          }
          uVar9 = 3;
          if (-1 < *(int *)(lVar11 + 0x2c)) {
            uVar9 = 1;
          }
          return uVar9;
        }
        goto LAB_00488d1c;
      }
    }
    if ((iVar2 == param_2) && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) >> 3 & 1) != 0)) {
      lVar5 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
      pcVar10 = *(code **)(param_1 + 0x78);
      uVar6 = FUN_00483b40();
      lVar7 = (*pcVar10)(param_1,uVar6);
      if (lVar7 != 0) {
        iVar2 = FUN_0047e430();
        if (iVar2 < 1) {
LAB_00488cb4:
          FUN_0047e3b0(lVar7,PTR_FUN_047cd0a0);
          return 3;
        }
        iVar2 = 0;
LAB_00488be4:
        lVar8 = FUN_0047e450(lVar7,iVar2);
        iVar3 = FUN_00483b60(lVar8,lVar5);
        if (iVar3 != 0) goto code_r0x00488c00;
        if ((lVar8 != 0) && (iVar2 = FUN_00485cf0(lVar8), iVar2 != 0)) {
          FUN_0047e3b0(lVar7,PTR_FUN_047cd0a0);
          iVar2 = FUN_004899f0(lVar8,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),0);
          if (iVar2 == 2) {
            FUN_0048c830(lVar8);
            iVar3 = 0;
LAB_00488c70:
            *(int *)(param_1 + 0xac) = iVar3;
            if (lVar5 == 0) {
              lVar5 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar3);
            }
            *(undefined4 *)(param_1 + 0xb0) = 0x1c;
            *(long *)(param_1 + 0xb8) = lVar5;
            iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
            uVar9 = 2;
            if (iVar2 != 0) {
              uVar9 = 3;
            }
            return uVar9;
          }
          FUN_0047e480(*(undefined8 *)(param_1 + 0x98),0,lVar8);
          FUN_0048c830(lVar5);
          *(undefined4 *)(param_1 + 0x94) = 0;
LAB_00488ce8:
          if (lVar11 != 0) goto LAB_00488cec;
          goto LAB_00488d1c;
        }
        goto LAB_00488cb4;
      }
    }
    uVar9 = 3;
  }
  else {
    iVar3 = FUN_00488e60(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xe8),lVar5,
                         param_2);
    if (iVar3 < 0) {
      return 2;
    }
    if (iVar3 == 0) goto LAB_00488b24;
    *(int *)(param_1 + 0x94) = param_2 + -1;
LAB_00488d1c:
    uVar9 = 1;
  }
  return uVar9;
code_r0x00488c00:
  iVar2 = iVar2 + 1;
  iVar3 = FUN_0047e430(lVar7);
  if (iVar3 <= iVar2) goto LAB_00488cb4;
  goto LAB_00488be4;
}


