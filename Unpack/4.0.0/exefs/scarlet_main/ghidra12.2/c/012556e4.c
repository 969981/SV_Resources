/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012556e4; name: FUN_012556e4
 */


void FUN_012556e4(long param_1,char *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *local_78;
  char local_70 [4];
  char local_6c [4];
  char local_68 [4];
  undefined1 local_64 [4];
  
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar4 = FUN_01689a40(param_1,uVar6);
  lVar9 = FUN_01255aac(param_1,local_64,local_68,*(undefined4 *)((long)param_3 + 0xc));
  uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_01255a68(param_1,uVar6,*(undefined2 *)(param_3 + 1));
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_01932f80(uVar13,uVar6,0x205,uVar4,*(undefined2 *)(param_3 + 1));
  uVar13 = FUN_0124e480(param_1);
  uVar10 = FUN_01255a58(uVar13,*(undefined2 *)(param_3 + 1),0x3e851ff78a35e0cf);
  if ((uVar10 & 1) == 0) {
    uVar13 = FUN_0124e480(param_1);
    uVar10 = thunk_FUN_019c4328(uVar13,*(undefined2 *)(param_3 + 1));
    if ((uVar10 & 1) != 0) {
      FUN_01a06d44(param_1,*param_3,lVar9,*(undefined2 *)(param_3 + 1),local_6c,local_70,param_3[2])
      ;
      *param_2 = local_70[0] << 1;
      param_2[1] = local_6c[0];
      param_2[2] = '\x01';
      return;
    }
    uVar13 = FUN_0124e480(param_1);
    iVar7 = FUN_0298a1c0(uVar13,*(undefined2 *)(param_3 + 1));
    cVar2 = local_68[0];
    if (iVar7 == 3) {
      param_2[0] = '\x01';
      param_2[1] = '\x01';
      return;
    }
    uVar10 = FUN_0298a298(param_1,*(undefined2 *)(param_3 + 1),local_64[0],local_68[0]);
    if ((uVar10 & 1) != 0) {
      uVar13 = FUN_0124e480(param_1);
      iVar7 = FUN_0298a1c0(uVar13,*(undefined2 *)(param_3 + 1));
      if (iVar7 == 2) {
        FUN_0124e480(param_1);
        FUN_01242424(&local_78);
        (**(code **)(*local_78 + 0x48))(local_78,9,1);
        if (local_78 != (long *)0x0) {
          plVar1 = local_78 + 5;
          do {
            lVar14 = *plVar1;
            iVar7 = (int)lVar14 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*local_78 + 0x10))();
          }
          else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        cVar2 = local_68[0];
      }
      uVar6 = 0xa6;
      if (cVar2 != '\n') {
        uVar6 = 0xa7;
      }
      uVar13 = FUN_01245ab0(param_1);
      uVar8 = FUN_011afcac(uVar13,uVar6);
      lVar14 = 0;
      bVar3 = false;
      do {
        uVar13 = FUN_0124e480(param_1);
        iVar7 = thunk_FUN_01972c08(uVar13,*(undefined2 *)(param_3 + 1),(&DAT_045fe900)[lVar14]);
        if (iVar7 != 0) {
          cVar5 = (**(code **)((long)&PTR_FUN_045fe908 + lVar14))
                            (param_1 + (*(long *)((long)&DAT_045fe910 + lVar14) >> 1),lVar9,
                             *(undefined2 *)(param_3 + 1),iVar7,*(undefined1 *)((long)param_3 + 10),
                             *param_3);
          bVar3 = (bool)(bVar3 | cVar5 != '\0');
        }
        lVar14 = lVar14 + 0x18;
      } while (lVar14 != 0x1c8);
      uVar11 = 0xf;
      if (cVar2 != '\n') {
        uVar11 = 3;
      }
      if (bVar3) {
        uVar13 = FUN_01245ab0(3,param_1);
        if (cVar2 == '\n') {
          FUN_01679624(uVar13,uVar8,uVar6,0xf);
        }
        else {
          FUN_01679624(uVar13,uVar8,0xa7,cVar2,uVar11);
        }
        param_2[1] = '\x01';
        if (lVar9 != 0) {
          uVar13 = FUN_0124e480(param_1);
          FUN_0298a500(uVar13,lVar9,*(undefined2 *)(param_3 + 1));
        }
        goto LAB_0125599c;
      }
      goto LAB_01255978;
    }
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar13 = 0x2bd;
  }
  else {
LAB_01255978:
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar13 = 0x233;
  }
  FUN_0297ee68(uVar12,uVar6,uVar13);
LAB_0125599c:
  *param_2 = '\0';
  return;
}


