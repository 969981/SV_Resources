/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003576f0; name: FUN_003576f0
 */


ulong FUN_003576f0(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_70 [32];
  
  if (param_2 == (undefined8 *)0x0) {
    lVar2 = tpidr_el0;
    if (*(long *)(lVar2 + 0x68) == param_1) {
      return 0;
    }
    if ((param_3 >> 1 & 1) != 0) {
LAB_003579ac:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    puVar8 = (undefined8 *)(param_1 + 0x20);
    if (puVar5 == puVar8) {
LAB_00357948:
      *(undefined4 *)(param_1 + 0x48) = 1;
      return 0;
    }
    lVar1 = puVar5[3];
    *(undefined8 *)(lVar1 + 0x10) = puVar5[2];
    *(long *)(puVar5[2] + 0x18) = lVar1;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00357948;
    puVar6 = *(undefined8 **)(lVar2 + 0x60);
    if (puVar6 == puVar5) {
      puVar5[2] = puVar8;
      puVar5[3] = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar5;
      *(undefined8 **)(puVar5[3] + 0x10) = puVar5;
      puVar5 = *(undefined8 **)(param_1 + 0x30);
      if (puVar5 == puVar8) {
        if ((param_3 & 1) != 0) {
          return 0;
        }
        puVar5 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          return 0;
        }
LAB_00357968:
        puVar5[2] = puVar8;
        puVar5[3] = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar5;
        *(undefined8 **)(puVar5[3] + 0x10) = puVar5;
        return 0;
      }
      lVar2 = puVar5[3];
      *(undefined8 *)(lVar2 + 0x10) = puVar5[2];
      *(long *)(puVar5[2] + 0x18) = lVar2;
      if (((param_3 & 1) == 0) && (puVar6 == puVar5)) goto LAB_00357968;
    }
    puVar5[2] = puVar8;
    puVar5[3] = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar5;
    *(undefined8 **)(puVar5[3] + 0x10) = puVar5;
    lVar2 = thunk_FUN_003624d0(*puVar5);
  }
  else {
    if (param_2 == (undefined8 *)0x1) {
      if ((param_3 >> 1 & 1) != 0) goto LAB_003579ac;
      puVar8 = *(undefined8 **)(param_1 + 0x30);
      if (puVar8 == (undefined8 *)(param_1 + 0x20)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          lVar2 = thunk_FUN_003624d0(*puVar8);
          if (lVar2 != 0) {
            if (uVar7 == 0) {
              FUN_003673f0(auStack_70,"Kick Failure");
              uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc"
                                   ,0x2f1,auStack_70,0,0);
            }
            uVar7 = FUN_00352130(uVar7,lVar2);
          }
          puVar8 = (undefined8 *)puVar8[2];
        } while (puVar8 != (undefined8 *)(param_1 + 0x20));
      }
      *(undefined4 *)(param_1 + 0x48) = 1;
      goto joined_r0x003578fc;
    }
    lVar2 = tpidr_el0;
    if ((*(undefined8 **)(lVar2 + 0x60) == param_2) && ((param_3 & 1) == 0)) {
      return 0;
    }
    if ((param_3 >> 1 & 1) != 0) {
      *(undefined4 *)(param_2 + 1) = 1;
    }
    *(undefined4 *)((long)param_2 + 0xc) = 1;
    lVar2 = thunk_FUN_003624d0(*param_2);
  }
  if (lVar2 == 0) {
    return 0;
  }
  FUN_003673f0(auStack_70,"Kick Failure");
  uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x2f1,
                       auStack_70,0,0);
  uVar7 = FUN_00352130(uVar3,lVar2);
joined_r0x003578fc:
  uVar4 = uVar7;
  if (4 < uVar7) {
    uVar4 = FUN_00350fb0(uVar7);
  }
  if (uVar4 == 0) {
    return uVar7;
  }
  FUN_00352b40("pollset_kick_ext",uVar4,
               "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x337);
  return uVar7;
}


