/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dd11c; name: FUN_027dd11c
 */


void FUN_027dd11c(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *__dest;
  byte local_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  byte local_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  *param_1 = *param_2;
  lVar6 = param_2[1];
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar3 = FUN_01cf7e20();
  param_1[3] = 0;
  pbVar8 = (byte *)(param_1 + 2);
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  param_1[4] = 0;
  param_1[5] = uVar3;
  uVar3 = FUN_01cf7e20();
  pbVar7 = (byte *)(param_1 + 6);
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  param_1[8] = 0;
  param_1[9] = uVar3;
  param_1[7] = 0;
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0xd] = plVar4;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 027dd360 to 027dd367 has its CatchHandler @ 027dd368 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x51);
    *(char *)(param_1 + 10) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_027dd20c;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar5,1);
    param_1[10] = uVar5 | 1;
    param_1[0xb] = __n;
    param_1[0xc] = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_027dd20c:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_00250bf0(&local_90,param_3);
  if (((long *)param_1[5] == local_78) ||
     (uVar5 = (**(code **)(*(long *)param_1[5] + 0x20))(), (uVar5 & 1) != 0)) {
    if ((*pbVar8 & 1) != 0) {
      (**(code **)(*(long *)param_1[5] + 0x18))
                ((long *)param_1[5],param_1[4],param_1[2] & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 2) = 0;
    }
    param_1[4] = local_80;
    param_1[3] = uStack_88;
    *(ulong *)pbVar8 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    local_90 = 0;
    uStack_8f = 0;
  }
  else {
                    /* try { // try from 027dd27c to 027dd287 has its CatchHandler @ 027dd370 */
    FUN_01d0e1a8(pbVar8,&local_90);
  }
  if (((long *)param_1[9] == local_58) ||
     (uVar5 = (**(code **)(*(long *)param_1[9] + 0x20))(), (uVar5 & 1) != 0)) {
    if ((*pbVar7 & 1) != 0) {
      (**(code **)(*(long *)param_1[9] + 0x18))
                ((long *)param_1[9],param_1[8],param_1[6] & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 6) = 0;
    }
    param_1[8] = local_60;
    param_1[7] = uStack_68;
    *(ulong *)pbVar7 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,local_70));
    local_70 = 0;
    uStack_6f = 0;
  }
  else {
                    /* try { // try from 027dd32c to 027dd337 has its CatchHandler @ 027dd370 */
    FUN_01d0e1a8(pbVar7,&local_70);
    if ((local_70 & 1) != 0) {
      (**(code **)(*local_58 + 0x18))
                (local_58,local_60,
                 CONCAT62(uStack_6e,CONCAT11(uStack_6f,local_70)) & 0xfffffffffffffffe,1);
    }
  }
  if ((local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))
              (local_78,local_80,
               CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90)) & 0xfffffffffffffffe,1);
  }
  return;
}


