/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f8910; name: FUN_002f8910
 */


undefined8 FUN_002f8910(long param_1,int param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_003673f0(&local_50,"Handshaker shutdown");
    uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                         ,0x123,&local_50,0,0);
    return uVar2;
  }
  if (param_2 == 0) {
    if (param_5 == 0) {
      if (param_4 == 0) goto LAB_002f8978;
    }
    else {
      if (*(long *)(param_1 + 0x208) != 0) goto LAB_002f8ac8;
      *(long *)(param_1 + 0x208) = param_5;
      if (param_4 == 0) {
        param_2 = FUN_0038c0b0(param_5,&local_30);
        if (param_2 == 0) {
          (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                    (*(long **)(param_1 + 0x18),local_30,uStack_28,**(undefined8 **)(param_1 + 0x58)
                     ,param_1 + 0x200,param_1 + 0x1e0);
          return 0;
        }
        FUN_003673f0(&local_50,"Peer extraction failed");
        uVar2 = 0x116;
        goto LAB_002f8a08;
      }
    }
    FUN_003676d0(&local_50,param_3,param_4);
    lVar1 = param_1 + 0x78;
    FUN_00368510(lVar1);
    uStack_68 = uStack_48;
    local_70 = local_50;
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    FUN_003686e0(lVar1,&local_70);
    uVar2 = **(undefined8 **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined1 **)(param_1 + 0x1a8) = &LAB_002f8b18;
    *(long *)(param_1 + 0x1b0) = param_1;
    FUN_00350ef0(uVar2,lVar1,param_1 + 0x1a0,0);
  }
  else {
    if (param_2 != 4) {
      FUN_003673f0(&local_50,"Handshake failed");
      uVar2 = 0x133;
LAB_002f8a08:
      uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                           ,uVar2,&local_50,0,0);
      uVar2 = FUN_002f9cb0(uVar2,param_2);
      return uVar2;
    }
    if (param_4 != 0) {
LAB_002f8ac8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_002f8978:
    uVar2 = **(undefined8 **)(param_1 + 0x58);
    uVar3 = (*(undefined8 **)(param_1 + 0x58))[2];
    *(undefined1 **)(param_1 + 0x1c8) = &LAB_002f8acc;
    *(long *)(param_1 + 0x1d0) = param_1;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    FUN_00350ee0(uVar2,uVar3,param_1 + 0x1c0,1);
  }
  return 0;
}


