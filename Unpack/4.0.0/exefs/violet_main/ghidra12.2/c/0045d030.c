/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045d030; name: FUN_0045d030
 */


long * FUN_0045d030(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar1 = (long *)FUN_003e0040();
  if (plVar1 == (long *)0x0) {
    uVar4 = 0xd;
    uVar5 = 0x1c;
    goto LAB_0045d12c;
  }
  *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
  iVar3 = *(int *)((long)param_1 + 0x14);
  if (iVar3 < 1) {
LAB_0045d090:
    *(int *)((long)plVar1 + 0x14) = iVar3;
    *(int *)(plVar1 + 2) = (int)param_1[2];
    if (param_1[1] != 0) {
      lVar2 = FUN_0045abd0(param_1[1],"external/openssl/crypto/objects/obj_lib.c",0x2c);
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_0045d10c;
    }
    if (*param_1 == 0) {
      return plVar1;
    }
    lVar2 = FUN_0045abd0(*param_1,"external/openssl/crypto/objects/obj_lib.c",0x2f);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
  }
  else {
    lVar2 = FUN_0045ace0(param_1[3],iVar3,"external/openssl/crypto/objects/obj_lib.c",0x26);
    plVar1[3] = lVar2;
    if (lVar2 != 0) {
      iVar3 = *(int *)((long)param_1 + 0x14);
      goto LAB_0045d090;
    }
  }
LAB_0045d10c:
  FUN_003dffa0(plVar1);
  uVar4 = 0x41;
  uVar5 = 0x35;
LAB_0045d12c:
  FUN_004806c0(8,0x65,uVar4,"external/openssl/crypto/objects/obj_lib.c",uVar5);
  return (long *)0x0;
}


