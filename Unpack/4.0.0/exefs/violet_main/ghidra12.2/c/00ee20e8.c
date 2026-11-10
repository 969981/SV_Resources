/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee20e8; name: FUN_00ee20e8
 */


void FUN_00ee20e8(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  memcpy(param_1,param_2,0x80);
  uVar10 = *(undefined8 *)((long)param_2 + 0x98);
  uVar4 = *(undefined8 *)((long)param_2 + 0xa0);
  uVar3 = *(undefined8 *)((long)param_2 + 0xa8);
  uVar5 = *(undefined8 *)((long)param_2 + 0xb0);
  *(undefined8 *)((long)param_1 + 0x80) = 0;
  *(undefined8 *)((long)param_1 + 0x88) = 0;
  *(undefined8 *)((long)param_1 + 0x90) = 0;
  *(undefined8 *)((long)param_1 + 0xa8) = uVar3;
  *(undefined8 *)((long)param_1 + 0xb0) = uVar5;
  *(undefined8 *)((long)param_1 + 0x98) = uVar10;
  *(undefined8 *)((long)param_1 + 0xa0) = uVar4;
  lVar9 = *(long *)((long)param_2 + 0x88) - *(long *)((long)param_2 + 0x80);
  if (lVar9 != 0) {
    FUN_02bb2594((undefined8 *)((long)param_1 + 0x80),lVar9 >> 4);
    lVar9 = *(long *)((long)param_2 + 0x80);
    lVar6 = *(long *)((long)param_2 + 0x88);
    lVar11 = *(long *)((long)param_1 + 0x88);
    if (lVar9 != lVar6) {
      do {
        FUN_0271548c((long)param_1 + 0x98,lVar11,lVar9);
        lVar9 = lVar9 + 0x10;
        lVar11 = lVar11 + 0x10;
      } while (lVar6 != lVar9);
    }
    *(long *)((long)param_1 + 0x88) = lVar11;
  }
  uVar10 = *(undefined8 *)((long)param_2 + 0xd0);
  uVar4 = *(undefined8 *)((long)param_2 + 0xd8);
  uVar3 = *(undefined8 *)((long)param_2 + 0xe0);
  uVar5 = *(undefined8 *)((long)param_2 + 0xe8);
  *(undefined8 *)((long)param_1 + 0xb8) = 0;
  *(undefined8 *)((long)param_1 + 0xc0) = 0;
  *(undefined8 *)((long)param_1 + 200) = 0;
  *(undefined8 *)((long)param_1 + 0xe0) = uVar3;
  *(undefined8 *)((long)param_1 + 0xe8) = uVar5;
  *(undefined8 *)((long)param_1 + 0xd0) = uVar10;
  *(undefined8 *)((long)param_1 + 0xd8) = uVar4;
  lVar9 = *(long *)((long)param_2 + 0xc0) - *(long *)((long)param_2 + 0xb8);
  if (lVar9 != 0) {
    FUN_02bb2594((undefined8 *)((long)param_1 + 0xb8),lVar9 >> 4);
    lVar9 = *(long *)((long)param_2 + 0xb8);
    lVar6 = *(long *)((long)param_2 + 0xc0);
    lVar11 = *(long *)((long)param_1 + 0xc0);
    if (lVar9 != lVar6) {
      do {
        FUN_0271548c((long)param_1 + 0xd0,lVar11,lVar9);
        lVar9 = lVar9 + 0x10;
        lVar11 = lVar11 + 0x10;
      } while (lVar6 != lVar9);
    }
    *(long *)((long)param_1 + 0xc0) = lVar11;
  }
  uVar10 = *(undefined8 *)((long)param_2 + 0x108);
  uVar4 = *(undefined8 *)((long)param_2 + 0x110);
  uVar3 = *(undefined8 *)((long)param_2 + 0x118);
  uVar5 = *(undefined8 *)((long)param_2 + 0x120);
  *(undefined8 *)((long)param_1 + 0xf0) = 0;
  *(undefined8 *)((long)param_1 + 0xf8) = 0;
  *(undefined8 *)((long)param_1 + 0x100) = 0;
  *(undefined8 *)((long)param_1 + 0x118) = uVar3;
  *(undefined8 *)((long)param_1 + 0x120) = uVar5;
  *(undefined8 *)((long)param_1 + 0x108) = uVar10;
  *(undefined8 *)((long)param_1 + 0x110) = uVar4;
  lVar9 = *(long *)((long)param_2 + 0xf8) - *(long *)((long)param_2 + 0xf0);
  if (lVar9 != 0) {
    FUN_02bb261c((undefined8 *)((long)param_1 + 0xf0),lVar9 >> 2);
    lVar9 = *(long *)((long)param_2 + 0xf0);
    lVar6 = *(long *)((long)param_2 + 0xf8);
    lVar11 = *(long *)((long)param_1 + 0xf8);
    if (lVar9 != lVar6) {
      do {
        FUN_02715578((long)param_1 + 0x108,lVar11,lVar9);
        lVar9 = lVar9 + 4;
        lVar11 = lVar11 + 4;
      } while (lVar6 != lVar9);
    }
    *(long *)((long)param_1 + 0xf8) = lVar11;
  }
  lVar9 = *(long *)((long)param_2 + 0x128);
  *(long *)((long)param_1 + 0x128) = lVar9;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar10 = *(undefined8 *)((long)param_2 + 0x130);
  *(undefined2 *)((long)param_1 + 0x138) = *(undefined2 *)((long)param_2 + 0x138);
  *(undefined8 *)((long)param_1 + 0x130) = uVar10;
  return;
}


