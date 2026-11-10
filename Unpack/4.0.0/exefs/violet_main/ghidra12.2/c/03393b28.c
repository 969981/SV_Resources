/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03393b28; name: FUN_03393b28
 */


undefined4 FUN_03393b28(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  iVar5 = (int)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2) * -0x55555555;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar5) {
    FUN_033277d4(param_2,PTR_PTR_047d1a50,(long)iVar5);
  }
  iVar1 = (int)param_2[1];
  if (iVar1 < iVar5) {
    puVar3 = (undefined8 *)(*param_2 + (long)iVar1 * 0x18);
    lVar4 = (long)iVar5 * 0x18 + (long)iVar1 * -0x18;
    *(int *)(param_2 + 1) = iVar5;
    do {
      *(undefined4 *)((long)puVar3 + 0x14) = 0;
      lVar4 = lVar4 + -0x18;
      *(undefined1 *)(puVar3 + 2) = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 3;
    } while (lVar4 != 0);
  }
  else if (iVar5 < iVar1) {
    *(int *)(param_2 + 1) = iVar5;
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (1 < (int)((ulong)(*(long *)(param_1 + 0x50) - lVar4) >> 2) * -0x55555555) {
    lVar6 = 0;
    lVar7 = 0;
    lVar8 = 1;
    do {
      lVar4 = lVar4 + lVar6;
      auVar9 = FUN_03393e1c(param_1,lVar4 + 0xc);
      *(long *)(*param_2 + lVar7 + 0x18) = auVar9._0_8_;
      *(long *)(*param_2 + lVar7 + 0x20) = auVar9._8_8_;
      switch(*(int *)(lVar4 + 0xc) + 0xf0000000U >> 0x1c) {
      case 0:
      case 3:
      case 4:
        *(undefined1 *)(*param_2 + lVar7 + 0x28) = 0;
        uVar2 = 0xffffffff;
        goto LAB_03393c9c;
      case 1:
        *(undefined1 *)(*param_2 + lVar7 + 0x28) = 1;
        break;
      case 2:
        *(undefined1 *)(*param_2 + lVar7 + 0x28) = 2;
        break;
      default:
        goto switchD_03393c5c_default;
      }
      uVar2 = *(undefined4 *)(lVar4 + 0x14);
LAB_03393c9c:
      *(undefined4 *)(*param_2 + lVar7 + 0x2c) = uVar2;
switchD_03393c5c_default:
      lVar4 = *(long *)(param_1 + 0x48);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x18;
      lVar6 = lVar6 + 0xc;
    } while (lVar8 < (int)((ulong)(*(long *)(param_1 + 0x50) - lVar4) >> 2) * -0x55555555);
  }
  return (int)param_2[1];
}


