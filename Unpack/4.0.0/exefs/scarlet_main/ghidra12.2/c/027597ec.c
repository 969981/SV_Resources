/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027597ec; name: FUN_027597ec
 */


long FUN_027597ec(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long *local_178;
  undefined1 auStack_170 [24];
  long *local_158;
  undefined1 auStack_150 [24];
  long *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_a8;
  undefined4 local_a4;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  long *local_70 [2];
  
  lVar14 = param_1[1];
  lVar13 = *param_1;
  iVar7 = FUN_00ed5b28(*param_2);
  if (iVar7 != 0) {
    iVar16 = 0;
    do {
      FUN_00ed64e8(local_70,*param_2,iVar16);
      iVar8 = FUN_0275acac(local_70[0]);
      if (iVar8 != 0) {
        iVar15 = 0;
        do {
          lVar10 = FUN_0275acbc(local_70[0],iVar15);
          iVar9 = strcmp(*(char **)(lVar10 + 8),"ImplicitTech");
          if (iVar9 == 0) {
            puVar11 = (undefined8 *)FUN_027163b0(*param_2,iVar16);
            uVar1 = *puVar11;
            uVar3 = puVar11[1];
            uVar2 = puVar11[2];
            plVar4 = (long *)puVar11[3];
            local_90 = uVar1;
            uStack_88 = uVar3;
            local_80 = uVar2;
            plStack_78 = plVar4;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
            local_98 = (long *)0x0;
            plVar12 = (long *)FUN_00d44228();
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
            if (local_98 != (long *)0x0) {
              lVar10 = *local_98;
              local_98 = plVar12;
              (**(code **)(lVar10 + 0x20))();
              plVar12 = local_98;
            }
            local_98 = plVar12;
            local_a0 = (long *)0x0;
            plVar12 = (long *)FUN_00d44228();
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
            if (local_a0 != (long *)0x0) {
              lVar10 = *local_a0;
              local_a0 = plVar12;
              (**(code **)(lVar10 + 0x20))();
              plVar12 = local_a0;
            }
            local_a0 = plVar12;
            FUN_0275accc(&local_90,&local_98,&local_a0);
            FUN_0271363c(local_70[0],&local_a4,"ImplicitRadius");
            FUN_0275ae44(local_70[0],&local_a8,"MaskFuncType");
            FUN_0271365c(local_70[0],&local_b8,"Mask0UVDirection");
            FUN_0271365c(local_70[0],&local_c8,"Mask1UVDirection");
            FUN_0271365c(local_70[0],&local_d8,"Volume0UVDirection");
            FUN_0271365c(local_70[0],&local_e8,"Volume1UVDirection");
            FUN_0271365c(local_70[0],&local_f8,"AxisDirection");
            local_190 = uVar1;
            uStack_188 = uVar3;
            local_180 = uVar2;
            local_178 = plVar4;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
            FUN_0135d26c(auStack_170,&local_98);
            FUN_0135d26c(auStack_150,&local_a0);
            local_130 = local_b8;
            uStack_12c = uStack_b4;
            local_128 = local_c8;
            uStack_124 = uStack_c4;
            local_120 = local_d8;
            uStack_11c = uStack_d4;
            local_118 = local_e8;
            uStack_114 = uStack_e4;
            local_108 = local_f0;
            local_110 = local_f8;
            local_104 = local_a4;
            local_100 = local_a8 == 1;
            FUN_0275ae60(param_1,&local_190);
            if (local_138 != (long *)0x0) {
              (**(code **)(*local_138 + 0x20))();
            }
            if (local_158 != (long *)0x0) {
              (**(code **)(*local_158 + 0x20))();
            }
            if (local_178 != (long *)0x0) {
              (**(code **)(*local_178 + 0x20))();
            }
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x20))(plVar4);
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar8 != iVar15);
      }
      if (local_70[0] != (long *)0x0) {
        plVar4 = local_70[0] + 5;
        do {
          lVar10 = *plVar4;
          iVar8 = (int)lVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *(int *)plVar4 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != iVar7);
  }
  return (lVar14 - lVar13 >> 3) * 0x79435e50d79435e5 +
         (param_1[1] - *param_1 >> 3) * -0x79435e50d79435e5;
}


