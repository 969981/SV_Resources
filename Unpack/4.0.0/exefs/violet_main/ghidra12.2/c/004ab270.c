/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ab270; name: FUN_004ab270
 */


undefined1  [16] FUN_004ab270(long *param_1,long *param_2,byte *param_3,ulong param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte *local_58;
  
  if (((long *)*param_1 == param_2) || (*param_2 == 0)) {
    bVar1 = true;
  }
  else {
    std::mutex::lock();
    bVar1 = false;
  }
  local_58 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    local_58 = param_3 + 1;
  }
                    /* try { // try from 004ab2e0 to 004ab2e7 has its CatchHandler @ 004ab3f8 */
  lVar4 = FUN_004c04c0(param_2[4] + 0x130,&local_58);
  if (lVar4 == 0) {
    uVar6 = 0;
    uVar5 = 0;
    lVar4 = param_2[3];
  }
  else {
    auVar7._4_4_ = 0;
    auVar7._0_4_ = *(uint *)(lVar4 + 0x18);
    uVar6 = (ulong)*(uint *)(lVar4 + 0x1c);
    uVar5 = *(ulong *)(lVar4 + 0x20);
    auVar7._8_8_ = uVar5;
    if (*(uint *)(lVar4 + 0x18) != 0) goto joined_r0x004ab3a8;
    lVar4 = param_2[3];
  }
  if (lVar4 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    auVar7 = auVar2 << 0x40;
  }
  else {
                    /* try { // try from 004ab30c to 004ab31b has its CatchHandler @ 004ab3f4 */
    auVar7 = FUN_004ab270(param_1,lVar4,param_3,1);
    uVar6 = auVar7._0_8_ >> 0x20;
    if (auVar7._0_4_ != 0) goto joined_r0x004ab3a8;
  }
  if ((param_4 & 1) != 0) {
                    /* try { // try from 004ab34c to 004ab357 has its CatchHandler @ 004ab3f8 */
    uVar5 = FUN_004a2704(param_2,param_3);
    if ((uVar5 & 1) == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar7._8_8_;
      auVar7 = auVar3 << 0x40;
    }
    else {
      local_58 = param_3 + 1;
      if ((*param_3 & 1) != 0) {
        local_58 = *(byte **)(param_3 + 0x10);
      }
                    /* try { // try from 004ab37c to 004ab383 has its CatchHandler @ 004ab3f0 */
      lVar4 = FUN_004c04c0(param_2[4] + 0x130,&local_58);
      if (lVar4 == 0) {
        auVar7 = ZEXT816(0);
        uVar6 = 0;
      }
      else {
        auVar7 = *(undefined1 (*) [16])(lVar4 + 0x18);
        uVar6 = *(ulong *)*(undefined1 (*) [16])(lVar4 + 0x18) >> 0x20;
      }
    }
  }
joined_r0x004ab3a8:
  if (!bVar1) {
    std::mutex::unlock();
  }
  auVar8._8_8_ = auVar7._8_8_;
  auVar8._0_8_ = auVar7._0_8_ & 0xffffffff | uVar6 << 0x20;
  return auVar8;
}


