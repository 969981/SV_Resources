/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03165ca0; name: FUN_03165ca0
 */


void FUN_03165ca0(uint param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_270 [448];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  
  uVar7 = 0x10000 - (param_1 | 0x40004000);
  uVar2 = 0x10000 - (param_2 | 0x40004000);
  uVar7 = param_1 + 0x10001 >> 0xb & 8 | param_1 + 0x10001 >> 0x1c & 4 | uVar7 >> 0xd & 2 |
          uVar7 >> 0x1e & 1;
  uVar2 = param_2 + 0x10001 >> 0xb & 8 | param_2 + 0x10001 >> 0x1c & 4 | uVar2 >> 0xd & 2 |
          uVar2 >> 0x1e & 1;
  if ((uVar7 != 0 && uVar2 != 0) && (uVar2 & uVar7) < 9) {
    switch(uVar2 & uVar7) {
    case 0:
      break;
    default:
      if (param_2 <= param_1) {
        return;
      }
      break;
    case 2:
    case 4:
      if (param_1 <= param_2) {
        return;
      }
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      goto switchD_03165d34_caseD_3;
    }
    puVar1 = PTR_DAT_047e34b8 + 0x10;
    do {
      uVar6 = uVar7 - 1;
      if ((uVar6 < 0xc) && ((0x9afU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
        uVar7 = *(uint *)(&DAT_03d74584 + (long)(int)uVar6 * 4);
        uVar5 = *(undefined4 *)(&BYTE_03d74554 + (long)(int)uVar6 * 4);
        uVar6 = *(uint *)(&DAT_03d745b4 + (long)(int)uVar6 * 4);
      }
      else {
        uStack_a8 = 0xffffffff;
        local_a0 = 1;
        uStack_98 = 0;
        local_78 = 0;
        uStack_88 = 0;
        local_80 = 0x1bf;
        local_b0 = puVar1;
        local_90 = auStack_270;
        memset(auStack_270,0,0x1c0);
        FUN_0322bd4c(&local_b0,"unexpected side mask",0x14);
        iVar4 = FUN_03226f50(0xfdb72ff4,auStack_270,
                             "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Internal/FaceCutter/hkaiFaceCutterInput.cpp"
                             ,0x14b);
        if (iVar4 != 0) {
          CallSupervisor(0x26);
        }
        uVar5 = 0;
        uVar6 = 0;
      }
      lVar3 = param_3[1];
      *(undefined4 *)(*param_3 + (long)(int)lVar3 * 4) = uVar5;
      *(int *)(param_3 + 1) = (int)lVar3 + 1;
    } while ((uVar6 & uVar2) == 0);
  }
switchD_03165d34_caseD_3:
  return;
}


