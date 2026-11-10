/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b7bd4; name: FUN_027b7bd4
 */


void FUN_027b7bd4(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  size_t sVar5;
  long lVar6;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  long *plStack_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  long *plStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_30 = *param_2;
  local_28 = (long *)param_2[1];
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0066b4d4(&local_90);
                    /* try { // try from 027b7c14 to 027b7c27 has its CatchHandler @ 027b7d78 */
  puVar4 = (ulong *)FUN_0020f8d0(&local_90,&DAT_03bdfb3b,1);
  uStack_68 = puVar4[1];
  local_70 = *puVar4;
  plStack_58 = (long *)puVar4[3];
  local_60 = puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  sVar5 = strlen(param_3);
                    /* try { // try from 027b7c44 to 027b7c4f has its CatchHandler @ 027b7d4c */
  puVar4 = (ulong *)FUN_0020f8d0(&local_70,param_3,sVar5);
  uStack_48 = puVar4[1];
  local_50 = *puVar4;
  plStack_38 = (long *)puVar4[3];
  local_40 = puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  FUN_0066adc0(param_1,&local_30,&local_50);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))(plStack_38,local_40,local_50 & 0xfffffffffffffffe,1);
  }
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))(plStack_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


