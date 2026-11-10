/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d6800; name: FUN_001d6800
 */


ulong FUN_001d6800(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar7 = (uint *)(param_2 + 0x10);
  puVar9 = (undefined8 *)(param_2 + 0x18);
  uVar8 = *puVar9;
  if ((*puVar7 < 7) && ((1 << (ulong)(*puVar7 & 0x1f) & 0x66U) != 0)) {
    iVar1 = *(int *)(param_2 + 0x20);
    lVar5 = FUN_001ec2f8(0x4000);
    if (lVar5 != 0) {
switchD_001d68f4_caseD_0:
      *(long *)(param_2 + 0x30) = lVar5;
      *(undefined4 *)(param_2 + 0x38) = 0x4000;
      uVar2 = FUN_003801d0(puVar9,5);
      if ((uVar2 < 2) && (*(int *)(param_2 + 0x38) != 0x4000)) {
        iVar4 = 0x4000 - *(int *)(param_2 + 0x38);
        *(uint *)(param_2 + 0x10) = param_3;
        if ((iVar4 != 0) &&
           (uVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x18))
                              (param_1,*(long **)(param_2 + 8),lVar5,iVar4), uVar3 != 0)) {
          uVar6 = (ulong)uVar3;
          FUN_001d6a20(param_1,puVar9,puVar7,uVar6);
          goto LAB_001d69a4;
        }
      }
      switch(uVar2) {
      case 0:
        goto switchD_001d68f4_caseD_0;
      case 1:
        uVar6 = FUN_001d67a4(param_1,puVar7);
        goto LAB_001d69a0;
      case 0xfffffffb:
        uVar6 = 0;
LAB_001d69a4:
        FUN_001ec308(lVar5);
        if ((iVar1 != 0) && (*puVar7 == 1)) {
          *puVar7 = param_3;
        }
        return uVar6;
      case 0xfffffffd:
        if (*puVar7 == 1) {
          FUN_003822f0(puVar9);
          iVar4 = FUN_0037fff0(puVar9,0xfffffff1,"1.2.11.f-NINTENDO-SDK-v1",0x70);
          if (iVar4 == 0) {
            *(int *)(param_2 + 0x20) = iVar1;
            puVar7[0] = 2;
            puVar7[1] = 4;
            *(undefined8 *)(param_2 + 0x18) = uVar8;
            goto switchD_001d68f4_caseD_0;
          }
          *puVar7 = 0;
        }
      default:
        FUN_001d6780(param_1,puVar9);
        uVar6 = FUN_001d6a20(param_1,puVar9,puVar7,0x3d);
LAB_001d69a0:
        uVar6 = uVar6 & 0xffffffff;
        goto LAB_001d69a4;
      }
    }
    uVar8 = 0x1b;
  }
  else {
    uVar8 = 0x17;
  }
  uVar6 = FUN_001d6a20(param_1,puVar9,puVar7,uVar8);
  return uVar6;
}


