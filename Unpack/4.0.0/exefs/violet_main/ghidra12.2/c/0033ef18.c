/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033ef18; name: FUN_0033ef18
 */


void FUN_0033ef18(long param_1)

{
  long *plVar1;
  void *__dest;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  size_t sVar7;
  void *__src;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  char *__s;
  undefined8 *local_238;
  long lStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  long lStack_1e8;
  undefined8 local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  void *pvStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190 [37];
  long local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  size_t local_48;
  
  lVar8 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(lVar8 + 0x18);
  if (lVar9 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar10 = *(undefined8 **)(lVar8 + 0x18);
  }
  puVar4 = PTR_DAT_047cc628;
  lVar8 = *(long *)PTR_DAT_047cc628;
  uStack_1b8 = *(undefined8 *)(lVar8 + 0x498);
  uStack_1c0 = *(undefined8 *)(lVar8 + 0x490);
  uStack_1c8 = *(undefined8 *)(lVar8 + 0x488);
  local_1d0 = *(undefined8 *)(lVar8 + 0x480);
                    /* try { // try from 0033ef74 to 0033ef77 has its CatchHandler @ 0033f3c4 */
  local_208 = FUN_0038e610();
  uStack_1f8 = *(undefined8 *)(param_1 + 0x20);
  lStack_230 = param_1 + 0x10;
  lVar8 = param_1 + 0x28;
  local_1e0 = 0;
  local_1d8 = 0;
  local_200 = 0x7fffffffffffffff;
  uStack_220 = uStack_1c8;
  local_228 = local_1d0;
  uStack_210 = uStack_1b8;
  local_218 = uStack_1c0;
                    /* try { // try from 0033efac to 0033efbb has its CatchHandler @ 0033f378 */
  local_238 = puVar10;
  local_1f0 = param_1 + 0x88;
  lStack_1e8 = lVar8;
  FUN_00339f28(local_190,&local_238,&local_1d8);
  uVar6 = local_190[0];
  puVar10 = local_238;
  local_190[0] = 0;
  *(undefined8 *)(param_1 + 200) = uVar6;
  if (local_238 != (undefined8 *)0x0) {
    plVar1 = local_238 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)*local_238)(local_238);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
  }
  puVar5 = PTR_LAB_047ccce8;
  *(long *)(param_1 + 0x928) = param_1;
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined **)(param_1 + 0x920) = puVar5;
                    /* try { // try from 0033f004 to 0033f027 has its CatchHandler @ 0033f424 */
  FUN_0033a33c(*(undefined8 *)(param_1 + 200),param_1 + 0x918);
  if (local_1d8 == 0) {
    *(long *)(param_1 + 0x160) = param_1 + 0x88;
    *(long *)(param_1 + 0x170) = param_1 + 0xd0;
                    /* try { // try from 0033f03c to 0033f04f has its CatchHandler @ 0033f374 */
    FUN_0033a374(local_190,*(undefined8 *)(param_1 + 200),&local_68,"on_complete");
    *(long *)(param_1 + 0x238) = param_1;
    puVar5 = PTR_LAB_047cccf0;
    lVar9 = param_1 + 0x248;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(long *)(param_1 + 0x168) = param_1 + 0x228;
    *(undefined **)(param_1 + 0x230) = puVar5;
                    /* try { // try from 0033f070 to 0033f0cf has its CatchHandler @ 0033f424 */
    FUN_00377130(lVar9);
    uVar6 = FUN_00376730(*(long *)puVar4,*(long *)puVar4 + 0x480);
    *(undefined8 *)(param_1 + 0x330) = uVar6;
    local_1d8 = FUN_00377230(lVar9,param_1 + 0x330,0);
    if (local_1d8 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0033f350 to 0033f353 has its CatchHandler @ 0033f424 */
      abort();
    }
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 1;
    *(long *)(param_1 + 0xd0) = lVar9;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    __s = *(char **)(*(long *)(param_1 + 8) + 0x10);
    lVar9 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
                    /* try { // try from 0033f0d4 to 0033f0e3 has its CatchHandler @ 0033f370 */
    puVar10 = (undefined8 *)FUN_0038ad50(PTR_DAT_047cccf8,lVar9);
    sVar7 = strlen(__s);
    *puVar10 = __s;
    puVar10[1] = sVar7;
                    /* try { // try from 0033f0f4 to 0033f10b has its CatchHandler @ 0033f36c */
    __src = (void *)FUN_0038ace0(puVar10,PTR_DAT_047cccf8,lVar9,&local_48);
                    /* try { // try from 0033f114 to 0033f11f has its CatchHandler @ 0033f368 */
    FUN_003670f0(&local_68,local_48);
    __dest = (void *)((long)&uStack_60 + 1);
    if (local_68 != 0) {
      __dest = local_58;
    }
    memcpy(__dest,__src,local_48);
                    /* try { // try from 0033f140 to 0033f16b has its CatchHandler @ 0033f40c */
    FUN_00368450(local_190);
    uStack_1a8 = uStack_60;
    local_1b0 = local_68;
    uStack_198 = uStack_50;
    pvStack_1a0 = local_58;
    FUN_003686e0(local_190,&local_1b0);
                    /* try { // try from 0033f170 to 0033f17f has its CatchHandler @ 0033f364 */
    FUN_00374ad8(param_1 + 0x350,local_190,0);
                    /* try { // try from 0033f180 to 0033f187 has its CatchHandler @ 0033f40c */
    FUN_00368470(local_190);
    if (lVar9 != 0) {
                    /* try { // try from 0033f18c to 0033f193 has its CatchHandler @ 0033f358 */
      FUN_0038bd40(lVar9);
    }
    puVar10 = *(undefined8 **)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = param_1 + 0x350;
    if (puVar10 != (undefined8 *)0x0) {
                    /* try { // try from 0033f1a8 to 0033f1ab has its CatchHandler @ 0033f354 */
      (**(code **)*puVar10)();
    }
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 4;
                    /* try { // try from 0033f1bc to 0033f1df has its CatchHandler @ 0033f424 */
    FUN_00377130(param_1 + 0x490);
    *(long *)(param_1 + 0xe8) = param_1 + 0x490;
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 2;
    FUN_00377130(param_1 + 0x578);
    *(long *)(param_1 + 0x108) = param_1 + 0x578;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
                    /* try { // try from 0033f1ec to 0033f1ff has its CatchHandler @ 0033f360 */
    FUN_0033a374(local_190,*(undefined8 *)(param_1 + 200),&local_68,"recv_initial_metadata_ready");
    puVar4 = PTR_LAB_047ccd00;
    *(long *)(param_1 + 0x670) = param_1;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(long *)(param_1 + 0x118) = param_1 + 0x660;
    *(undefined **)(param_1 + 0x668) = puVar4;
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 8;
    *(long *)(param_1 + 0x130) = param_1 + 0x680;
                    /* try { // try from 0033f234 to 0033f247 has its CatchHandler @ 0033f35c */
    FUN_0033a374(local_190,*(undefined8 *)(param_1 + 200),&local_68,"recv_message_ready");
    *(long *)(param_1 + 0x698) = param_1;
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    puVar4 = PTR_LAB_047ccd08;
    *(long *)(param_1 + 0x138) = param_1 + 0x688;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 0x690) = puVar4;
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 0x10;
    puVar4 = PTR_LAB_047ccd10;
    *(undefined **)(param_1 + 400) = PTR_LAB_047ccd10;
    *(long *)(param_1 + 0x198) = param_1 + 0x168;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
                    /* try { // try from 0033f290 to 0033f313 has its CatchHandler @ 0033f424 */
    FUN_003504a8(lVar8,param_1 + 0x188,0,"start_subchannel_batch");
    *(long *)(param_1 + 0x1f0) = param_1 + 0xd0;
    FUN_00377130(param_1 + 0x7d8);
    *(long *)(param_1 + 0x140) = param_1 + 0x7d8;
    *(long *)(param_1 + 0x148) = param_1 + 0x8c0;
    puVar5 = PTR_LAB_047ccd18;
    *(long *)(param_1 + 0x150) = param_1 + 0x8f0;
    *(undefined8 *)(param_1 + 0x908) = 0;
    *(undefined **)(param_1 + 0x8f8) = puVar5;
    *(long *)(param_1 + 0x900) = param_1;
    *(undefined **)(param_1 + 0x210) = puVar4;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 200);
    *(byte *)(param_1 + 0x1f8) = *(byte *)(param_1 + 0x1f8) | 0x20;
    *(long *)(param_1 + 0x218) = param_1 + 0x1e8;
    FUN_003504a8(lVar8,param_1 + 0x208,0,"start_subchannel_batch");
  }
  else {
    if (4 < local_1d8) {
      FUN_00350fd0();
    }
    FUN_0033f804(param_1,1);
  }
  return;
}


