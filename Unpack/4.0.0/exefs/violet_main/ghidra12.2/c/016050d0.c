/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016050d0; name: FUN_016050d0
 */


void FUN_016050d0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  AudioDeviceName local_120;
  undefined4 uStack_11f;
  undefined3 uStack_11b;
  undefined5 uStack_118;
  undefined3 local_113;
  int iStack_110;
  undefined4 uStack_10c;
  char local_108;
  
  local_120 = (AudioDeviceName)0x0;
  nn::audio::GetActiveAudioDeviceName(&local_120);
  lVar3 = 0;
  if ((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) != 0x6574536f69647541 ||
      CONCAT35(local_113,uStack_118) != 0x4f6b63614a6f6572) ||
      CONCAT17((undefined1)uStack_10c,CONCAT43(iStack_110,local_113)) != 0x74757074754f6b63) {
    if (CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) == 0x4f76546f69647541 &&
        CONCAT53(uStack_118,uStack_11b) == 0x74757074754f7654) {
      lVar3 = 1;
    }
    else if ((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) == 0x6273556f69647541 &&
             CONCAT35(local_113,uStack_118) == 0x754f656369766544) && iStack_110 == 0x74757074) {
      lVar3 = 2;
    }
    else {
      if ((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) != 0x6975426f69647541 ||
          CONCAT35(local_113,uStack_118) != 0x616570536e49746c) ||
          (CONCAT44(uStack_10c,iStack_110) != 0x757074754f72656b || local_108 != 't')) {
        return;
      }
      lVar3 = 3;
    }
  }
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8288;
  *(undefined8 *)PTR_DAT_047d8290 = uVar2;
  local_140 = 0xceffbd1d514ae980;
  pcStack_138 = "HAND_DOCK_MODE";
  local_130 = 0xe;
  local_128 = (long *)0x0;
  FUN_01605300((float)*(int *)(&UNK_03cabd30 + lVar3 * 4),uVar2,&local_140,0xffffffffffffffff,0);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  return;
}


