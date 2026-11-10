/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01248e90; name: FUN_01248e90
 */


void FUN_01248e90(long param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  
  bVar7 = FUN_00f7e274(param_3);
  if (bVar7 != 0) {
    uVar15 = 0;
    pcVar16 = (char *)(param_4 + 9);
    pcVar13 = (char *)(param_2 + 9);
    do {
      if (((uint)uVar15 & 0xff) < (uint)*(byte *)(param_3 + 0x30)) {
        plVar14 = *(long **)(param_3 + uVar15 * 8);
      }
      else {
        plVar14 = (long *)0x0;
      }
      uVar10 = (**(code **)(*plVar14 + 0x208))(plVar14);
      if (((uVar10 & 1) != 0) && (*(int *)(pcVar16 + -9) != 0)) {
        (**(code **)(*plVar14 + 0x118))(plVar14);
        uVar8 = (**(code **)(*plVar14 + 0x98))(plVar14);
        uVar9 = (**(code **)(*plVar14 + 0x1b0))(plVar14);
        cVar2 = pcVar16[-5];
        lVar12 = *(long *)(param_1 + 0x20);
        cVar1 = *pcVar16;
        cVar3 = pcVar16[-4];
        cVar4 = pcVar16[-3];
        cVar5 = pcVar16[-1];
        cVar6 = pcVar16[-2];
        plVar11 = (long *)FUN_01021c94(*(undefined8 *)
                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0x10) + 0x30),uVar8);
        (**(code **)(*plVar11 + 0x7a0))(plVar11,0,cVar2);
        (**(code **)(*plVar11 + 0x7a0))(plVar11,1,cVar3);
        (**(code **)(*plVar11 + 0x7a0))(plVar11,2,cVar4);
        (**(code **)(*plVar11 + 0x7a0))(plVar11,3,cVar5);
        (**(code **)(*plVar11 + 0x7a0))(plVar11,4,cVar1);
        (**(code **)(*plVar11 + 0x7a0))(plVar11,5,cVar6);
        FUN_0129aff0(*(undefined8 *)(lVar12 + 0x18),0x45,uVar8,cVar2,cVar3,cVar4,cVar5,cVar1,cVar6);
        pcVar13[-5] = pcVar13[-5] + pcVar16[-5];
        pcVar13[-4] = pcVar13[-4] + pcVar16[-4];
        pcVar13[-3] = pcVar13[-3] + pcVar16[-3];
        pcVar13[-1] = pcVar13[-1] + pcVar16[-1];
        *pcVar13 = *pcVar13 + *pcVar16;
        pcVar13[-2] = pcVar13[-2] + pcVar16[-2];
        uVar10 = (**(code **)(*plVar14 + 0x1b0))(plVar14);
        if (((uVar9 & 1) == 0) && ((uVar10 & 1) != 0)) {
          FUN_01249120(plVar14);
        }
      }
      uVar15 = uVar15 + 1;
      pcVar16 = pcVar16 + 0x10;
      pcVar13 = pcVar13 + 0x10;
    } while (bVar7 != uVar15);
  }
  return;
}


