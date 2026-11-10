/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d8c28; name: FUN_001d8c28
 */


undefined8 FUN_001d8c28(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_44 [4];
  
  if ((param_2 & 1) != 0) {
    if ((*(byte *)((long)param_1 + 0x3fc) & 1) != 0) {
LAB_001d8cf4:
      uVar5 = 1;
      goto joined_r0x001d8cf8;
    }
    uVar1 = FUN_001db41c(*(undefined4 *)(param_1 + 0x4b),0xffffffff,0xffffffff,0);
    if (uVar1 != 0) {
      if (((((uVar1 & 5) != 1) || (uVar3 = FUN_001c6b00(param_1), (uVar3 & 1) == 0)) ||
          ((code *)param_1[0xb7] == (code *)0x0)) ||
         (uVar3 = (*(code *)param_1[0xb7])(param_1,0,param_1[0xb8],0x8000,auStack_44),
         uVar3 == 0xffffffffffffffff)) goto LAB_001d8cf4;
      FUN_001db818(*param_1,"%d bytes stray data read before trying h2 connection\n",
                   uVar3 & 0xffffffff);
      param_1[0xba] = 0;
      param_1[0xb9] = uVar3;
      FUN_001d7960(param_1,param_1 + 0xaa,auStack_44);
    }
  }
  uVar5 = 0;
joined_r0x001d8cf8:
  if ((param_2 >> 1 & 1) != 0) {
    auVar7 = FUN_001e0dfc();
    iVar2 = FUN_001e0e28(auVar7._0_8_,auVar7._8_8_,param_1[0x87],param_1[0x88]);
    if ((long)param_1[0x89] < (long)iVar2) {
      iVar2 = FUN_001fa118(param_1[0xaa],0,0);
      if (iVar2 == 0) {
        *(undefined1 (*) [16])(param_1 + 0x87) = auVar7;
        iVar2 = FUN_001efc1c(param_1[0xaa]);
        if (iVar2 != 0) {
          uVar6 = *param_1;
          uVar4 = FUN_001ed704();
          FUN_001db9c8(uVar6,"nghttp2_session_send() failed: %s(%d)",uVar4,iVar2);
        }
      }
      else {
        uVar6 = *param_1;
        uVar4 = FUN_001ed704();
        FUN_001db9c8(uVar6,"nghttp2_submit_ping() failed: %s(%d)",uVar4,iVar2);
        *(undefined1 (*) [16])(param_1 + 0x87) = auVar7;
      }
    }
  }
  return uVar5;
}


