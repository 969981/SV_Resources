/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a6a90; name: FUN_003a6a90
 */


undefined8 FUN_003a6a90(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  *(long *)(param_1 + 0x960) = param_2;
  if (param_3 == 0) {
    lVar4 = 5;
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      lVar4 = 0xe;
    }
    iVar1 = FUN_003b5ee0(param_1);
    iVar2 = FUN_003cd8a0(param_1);
    param_3 = 7;
    if (iVar2 != 0) {
      param_3 = 0x407;
    }
    param_3 = lVar4 + (ulong)(iVar1 + 0x50) + param_3;
    if ((*(byte *)(param_1 + 0x695) >> 3 & 1) == 0) {
      param_3 = lVar4 + param_3 + 0x57;
    }
  }
  if (param_2 != 0) {
    lVar4 = 0;
    plVar5 = (long *)(param_1 + 0x990);
    do {
      if (*plVar5 == 0) {
LAB_003a6b64:
        lVar3 = FUN_00452c30(param_3,"external/openssl/ssl/record/ssl3_buffer.c",0x77);
        if (lVar3 == 0) {
          *(long *)(param_1 + 0x960) = lVar4;
          FUN_003c3950(param_1,0xffffffff,0x123,0x41,"external/openssl/ssl/record/ssl3_buffer.c",
                       0x80);
          return 0;
        }
        plVar5[2] = 0;
        plVar5[1] = 0;
        *plVar5 = lVar3;
        plVar5[2] = param_3;
        plVar5[4] = 0;
        plVar5[3] = 0;
      }
      else if (plVar5[2] != param_3) {
        FUN_00452f80(*plVar5,"external/openssl/ssl/record/ssl3_buffer.c",0x72);
        *plVar5 = 0;
        goto LAB_003a6b64;
      }
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 5;
    } while (param_2 != lVar4);
  }
  return 1;
}


