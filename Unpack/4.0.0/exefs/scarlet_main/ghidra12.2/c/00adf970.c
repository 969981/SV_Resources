/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00adf970; name: FUN_00adf970
 */


void FUN_00adf970(long *param_1,long *param_2,int param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  long *local_48;
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    FUN_01b3c408(0x69,(long)*(int *)(*param_2 + 0x30));
    FUN_02a08fb4(auStack_60,param_1);
    FUN_01b3c818(0x8f,local_58);
    FUN_01b3c408(0x90,(long)param_3);
    lVar3 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0);
    if (lVar3 != 0) {
      uVar1 = FUN_00cf44f4(*(undefined8 *)(lVar3 + 0x70));
      uVar2 = FUN_00cf41a8(*(undefined8 *)(lVar3 + 0x70));
      snprintf(&DAT_0483b140,8,"%04d_%02d",uVar1 & 0xffff,uVar2 & 0xffff);
      FUN_01b3c818(0x91,&DAT_0483b140);
    }
    lVar3 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,1);
    if (lVar3 != 0) {
      uVar1 = FUN_00cf44f4(*(undefined8 *)(lVar3 + 0x70));
      uVar2 = FUN_00cf41a8(*(undefined8 *)(lVar3 + 0x70));
      snprintf(&DAT_0483b140,8,"%04d_%02d",uVar1 & 0xffff,uVar2 & 0xffff);
      FUN_01b3c818(0x92,&DAT_0483b140);
    }
    lVar3 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,2);
    if (lVar3 != 0) {
      uVar1 = FUN_00cf44f4(*(undefined8 *)(lVar3 + 0x70));
      uVar2 = FUN_00cf41a8(*(undefined8 *)(lVar3 + 0x70));
      snprintf(&DAT_0483b140,8,"%04d_%02d",uVar1 & 0xffff,uVar2 & 0xffff);
      FUN_01b3c818(0x93,&DAT_0483b140);
    }
    lVar3 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,3);
    if (lVar3 != 0) {
      uVar1 = FUN_00cf44f4(*(undefined8 *)(lVar3 + 0x70));
      uVar2 = FUN_00cf41a8(*(undefined8 *)(lVar3 + 0x70));
      snprintf(&DAT_0483b140,8,"%04d_%02d",uVar1 & 0xffff,uVar2 & 0xffff);
      FUN_01b3c818(0x94,&DAT_0483b140);
    }
    lVar3 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,4);
    if (lVar3 != 0) {
      uVar1 = FUN_00cf44f4(*(undefined8 *)(lVar3 + 0x70));
      uVar2 = FUN_00cf41a8(*(undefined8 *)(lVar3 + 0x70));
      snprintf(&DAT_0483b140,8,"%04d_%02d",uVar1 & 0xffff,uVar2 & 0xffff);
      FUN_01b3c818(0x95,&DAT_0483b140);
    }
    lVar3 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,5);
    if (lVar3 != 0) {
      uVar1 = FUN_00cf44f4(*(undefined8 *)(lVar3 + 0x70));
      uVar2 = FUN_00cf41a8(*(undefined8 *)(lVar3 + 0x70));
      snprintf(&DAT_0483b140,8,"%04d_%02d",uVar1 & 0xffff,uVar2 & 0xffff);
      FUN_01b3c818(0x96,&DAT_0483b140);
    }
    uVar6 = (ulong)*(byte *)((long *)*param_1 + 0x12);
    if (uVar6 != 0) {
      uVar4 = 0;
      puVar7 = (undefined1 *)(*param_2 + 0x12f);
      do {
        if (puVar7[-1] != '\0') {
          lVar3 = (**(code **)(*(long *)*param_1 + 0x60))();
          if (lVar3 != 0) {
            uVar1 = FUN_00cf44f4(*(undefined8 *)(lVar3 + 0x70));
            uVar2 = FUN_00cf41a8(*(undefined8 *)(lVar3 + 0x70));
            snprintf(&DAT_0483b140,8,"%04d_%02d",uVar1 & 0xffff,uVar2 & 0xffff);
            FUN_01b3c818(0x6a,&DAT_0483b140);
            FUN_01b3c408(0x6b,*puVar7);
          }
          break;
        }
        uVar4 = uVar4 + 1;
        puVar7 = puVar7 + 0x1c;
      } while (uVar6 != uVar4);
    }
    if ((((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) ||
        (uVar6 = nn::nifm::IsNetworkAvailable(), (uVar6 & 1) == 0)) || (DAT_04839fc0 != 4)) {
      iVar5 = 0xc;
    }
    else {
      iVar5 = 0xe;
    }
    if ((param_4 & 1) == 0) {
      iVar5 = iVar5 + 1;
    }
    FUN_017d2474(iVar5,0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


