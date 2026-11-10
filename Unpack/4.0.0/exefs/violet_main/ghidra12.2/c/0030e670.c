/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030e670; name: FUN_0030e670
 */


long FUN_0030e670(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  byte local_d8 [16];
  ulong local_c8;
  undefined1 auStack_c0 [32];
  char local_a0 [8];
  long local_98;
  long lStack_90;
  char *local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  
  lVar4 = *(long *)(param_1 + 0x20);
  cVar3 = PTR_DAT_047ccb00[0x10];
  if (cVar3 != '\0') {
    uStack_80 = *(undefined8 *)(lVar4 + 8);
    local_88 = "  data recv";
    uVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28);
    uStack_70 = *(undefined8 *)(lVar4 + 0x18);
    local_78 = 0x7fffffff;
    if ((long)uVar1 < 0x80000000) {
      local_78 = uVar1 & 0xffffffff;
    }
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    local_68 = *(undefined8 *)(param_1 + 8);
    local_58 = *(undefined8 *)(param_1 + 0x18);
    local_98 = lVar4;
    lStack_90 = param_1;
  }
                    /* try { // try from 0030e6a0 to 0030e6a7 has its CatchHandler @ 0030e844 */
  local_a0[0] = cVar3;
  lVar4 = FUN_0030e574(lVar4,param_2);
  if (lVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    lVar4 = lVar5 + (ulong)*(uint *)(*(long *)(lVar2 + 0x20) + 0xdf4);
    if ((lVar4 < param_2) &&
       ((long)(lVar5 + (ulong)*(uint *)(*(long *)(lVar2 + 0x20) + 0xdd8)) < param_2)) {
      puStack_48 = PTR_FUN_047cc7c0;
      puStack_38 = PTR_FUN_047cc7c0;
                    /* try { // try from 0030e6e8 to 0030e707 has its CatchHandler @ 0030e81c */
      local_50 = param_2;
      local_40 = lVar4;
      FUN_00391b20(local_d8,"frame of size %ld overflows local window of %ld",0x2f,&local_50,2);
      uVar1 = (ulong)local_d8 | 1;
      if ((local_d8[0] & 1) != 0) {
        uVar1 = local_c8;
      }
                    /* try { // try from 0030e71c to 0030e73f has its CatchHandler @ 0030e820 */
      FUN_00367770(auStack_c0,uVar1);
      lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/flow_control.cc"
                           ,0xfc,auStack_c0,0,0);
      if ((local_d8[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_c8);
      }
    }
    else {
      if (0 < lVar5) {
        *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) - lVar5;
      }
      lVar5 = lVar5 - param_2;
      *(long *)(param_1 + 0x18) = lVar5;
      if (0 < lVar5) {
        *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + lVar5;
      }
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) - param_2;
      lVar4 = 0;
      *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) - param_2;
    }
  }
  if (cVar3 != '\0') {
                    /* try { // try from 0030e7b0 to 0030e7b7 has its CatchHandler @ 0030e840 */
    FUN_0030e03c(local_a0);
  }
  return lVar4;
}


