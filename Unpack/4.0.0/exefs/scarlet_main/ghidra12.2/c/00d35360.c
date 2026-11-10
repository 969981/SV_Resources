/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d35360; name: FUN_00d35360
 */


void FUN_00d35360(long *param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  byte local_3c [4];
  byte *local_38;
  
  lVar10 = *param_1;
  local_38 = local_3c;
  puVar6 = (undefined8 *)(lVar10 + 0x58);
  if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
    puVar5 = puVar6;
LAB_00d353cc:
    puVar8 = (undefined8 *)*puVar6;
    local_3c[0] = param_2;
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(lVar10 + 0x60);
      puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,0x60,8);
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar7 + 0xe8))();
      }
      FUN_00d75208(puVar7,puVar8 + 4,&local_38);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = puVar5;
      *puVar6 = puVar8;
      puVar5 = puVar8;
      if (**(long **)(lVar10 + 0x50) != 0) {
        *(long *)(lVar10 + 0x50) = **(long **)(lVar10 + 0x50);
        puVar5 = (undefined8 *)*puVar6;
      }
      FUN_010108e0(*(undefined8 *)(lVar10 + 0x58),puVar5);
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    puVar6 = (undefined8 *)puVar8[6];
    do {
      if (puVar6 == puVar8 + 5) {
        return;
      }
      if (((puVar6[5] != 0) && (*(short *)(puVar6[5] + 0x1a) != 0)) &&
         (plVar9 = *(long **)(puVar6[4] + 0x138), plVar9 != (long *)0x0)) {
        plVar1 = plVar9 + 5;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        if ((*(char *)(puVar6 + 0xd) != '\0') && (*(char *)(plVar9[0xe] + 0x19) != '\0')) {
          FUN_00e679f0();
        }
        do {
          lVar10 = *plVar1;
          iVar4 = (int)lVar10 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      puVar6 = (undefined8 *)puVar6[1];
    } while( true );
  }
  puVar8 = (undefined8 *)(lVar10 + 0x58);
  puVar5 = (undefined8 *)*puVar6;
  do {
    if (param_2 < *(byte *)(puVar5 + 4)) {
      puVar7 = (undefined8 *)*puVar5;
      if (puVar7 == (undefined8 *)0x0) {
        puVar6 = puVar5;
        goto LAB_00d353cc;
      }
      puVar8 = puVar5;
    }
    else {
      puVar6 = puVar8;
      if (param_2 <= *(byte *)(puVar5 + 4)) goto LAB_00d353cc;
      puVar6 = puVar5 + 1;
      puVar7 = (undefined8 *)*puVar6;
      puVar8 = puVar6;
      if (puVar7 == (undefined8 *)0x0) goto LAB_00d353cc;
    }
    puVar5 = puVar7;
  } while( true );
}


