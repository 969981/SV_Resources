/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a69640; name: FUN_00a69640
 */


void FUN_00a69640(long param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (*(int *)(param_1 + 0x298) != 1) {
    if (*(int *)(param_1 + 0x298) == 2) {
      plVar7 = *(long **)(param_1 + 0x30);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x58))(plVar7);
      }
      local_60 = &DAT_77133e00a0e5587f;
      pcStack_58 = "layout";
      local_50 = 6;
      local_48 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        puVar4 = (undefined8 *)FUN_00e895f4(plVar7[0x2e],&local_60);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,1);
          (**(code **)(*(long *)*puVar4 + 0xd0))(0);
          *(undefined1 *)((long)puVar4 + 0x31) = 0;
          if ((undefined1 *)puVar4[7] != (undefined1 *)0x0) {
            *(undefined1 *)puVar4[7] = 1;
          }
        }
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        (**(code **)(*plVar7 + 0x60))(plVar7);
      }
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),1);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),2);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),3);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),4);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),5);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),6);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),7);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),8);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),9);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),10);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0xb);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0xc);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0xd);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0xe);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0xf);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x10);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x11);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x12);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x13);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x14);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x15);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x16);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x17);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x18);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x19);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x1a);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x1b);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x1c);
      FUN_014e6294(0,*(undefined8 *)(param_1 + 0x1a8),0x1d);
    }
    goto LAB_00a69a74;
  }
  FUN_01dd8a5c(*(undefined8 *)(param_1 + 0x1b0),*(long *)(param_1 + 0x1a8) + 0x68bc,0x1e);
  FUN_01dd8a5c(*(undefined8 *)(param_1 + 0x1b0),*(long *)(param_1 + 0x1a8) + 0x68b0,6);
  lVar5 = FUN_01195854();
  iVar3 = 0;
  pcVar1 = (char *)(param_1 + 0x1714);
  do {
    uVar8 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*pcVar1 == '\0') ||
       (iVar2 = FUN_014e94fc(param_1,0,*(undefined1 *)(lVar5 + 0x570),iVar3), iVar2 != 2)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 2;
    }
    FUN_014e56f4(uVar8,0,iVar3,uVar6,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x1e);
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  if ((*pcVar1 == '\0') ||
     (iVar3 = FUN_014e94fc(param_1,1,*(undefined4 *)(param_1 + 0x2a4),0), iVar3 != 2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  FUN_014e56f4(uVar8,3,0,uVar6,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  if ((*pcVar1 == '\0') ||
     (iVar3 = FUN_014e94fc(param_1,1,*(undefined4 *)(param_1 + 0x2a4),1), iVar3 != 2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  FUN_014e56f4(uVar8,3,1,uVar6,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  if (*pcVar1 == '\0') {
LAB_00a699ec:
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
    iVar3 = FUN_014e94fc(param_1,1,*(undefined4 *)(param_1 + 0x2a4),2);
    if (iVar3 != 2) goto LAB_00a699ec;
  }
  FUN_014e56f4(uVar8,3,2,uVar6,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  if ((*pcVar1 == '\0') ||
     (iVar3 = FUN_014e94fc(param_1,1,*(undefined4 *)(param_1 + 0x2a4),3), iVar3 != 2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  FUN_014e56f4(uVar8,3,3,uVar6,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  if ((*pcVar1 == '\0') ||
     (iVar3 = FUN_014e94fc(param_1,1,*(undefined4 *)(param_1 + 0x2a4),4), iVar3 != 2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  FUN_014e56f4(uVar8,3,4,uVar6,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  if ((*pcVar1 == '\0') ||
     (iVar3 = FUN_014e94fc(param_1,1,*(undefined4 *)(param_1 + 0x2a4),5), iVar3 != 2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  FUN_014e56f4(uVar8,3,5,uVar6,0);
LAB_00a69a74:
  *(int *)(param_1 + 0x298) = (*(int *)(param_1 + 0x298) + 1) % 3;
  FUN_014a8164(param_1);
  return;
}


