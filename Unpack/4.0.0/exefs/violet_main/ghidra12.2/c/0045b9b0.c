/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045b9b0; name: FUN_0045b9b0
 */


undefined4 FUN_0045b9b0(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  if ((DAT_047f19f0 == 0) &&
     (DAT_047f19f0 = FUN_004513d0(&LAB_0045cdd0,&LAB_0045cf80), DAT_047f19f0 == 0)) {
    return 0;
  }
  plVar1 = (long *)FUN_0045d030(param_1);
  if (plVar1 == (long *)0x0) {
    puVar2 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar3 = (undefined4 *)0x0;
    goto LAB_0045bb8c;
  }
  puVar2 = (undefined4 *)FUN_00452c30(0x10,"external/openssl/crypto/objects/obj_dat.c",0xb9);
  if (puVar2 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if ((*(int *)((long)plVar1 + 0x14) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_00452c30(0x10,"external/openssl/crypto/objects/obj_dat.c",0xbc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
        goto LAB_0045bb70;
      }
    }
    if (*plVar1 == 0) {
      puVar7 = (undefined4 *)0x0;
      lVar6 = plVar1[1];
    }
    else {
      puVar7 = (undefined4 *)FUN_00452c30(0x10,"external/openssl/crypto/objects/obj_dat.c",0xbf);
      if (puVar7 == (undefined4 *)0x0) goto LAB_0045bb70;
      lVar6 = plVar1[1];
    }
    if (lVar6 == 0) {
      puVar4 = (undefined4 *)0x0;
joined_r0x0045bc08:
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        *(long **)(puVar3 + 2) = plVar1;
        uVar5 = FUN_004515c0(DAT_047f19f0,puVar3);
        FUN_00452f80(uVar5,"external/openssl/crypto/objects/obj_dat.c",0xcb);
      }
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 1;
        *(long **)(puVar7 + 2) = plVar1;
        uVar5 = FUN_004515c0(DAT_047f19f0,puVar7);
        FUN_00452f80(uVar5,"external/openssl/crypto/objects/obj_dat.c",0xcb);
      }
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 2;
        *(long **)(puVar4 + 2) = plVar1;
        uVar5 = FUN_004515c0(DAT_047f19f0,puVar4);
        FUN_00452f80(uVar5,"external/openssl/crypto/objects/obj_dat.c",0xcb);
      }
      *puVar2 = 3;
      *(long **)(puVar2 + 2) = plVar1;
      uVar5 = FUN_004515c0(DAT_047f19f0,puVar2);
      FUN_00452f80(uVar5,"external/openssl/crypto/objects/obj_dat.c",0xcb);
      *(uint *)(plVar1 + 4) = *(uint *)(plVar1 + 4) & 0xfffffff2;
      return (int)plVar1[2];
    }
    puVar4 = (undefined4 *)FUN_00452c30(0x10,"external/openssl/crypto/objects/obj_dat.c",0xc2);
    if (puVar4 != (undefined4 *)0x0) goto joined_r0x0045bc08;
  }
LAB_0045bb70:
  FUN_004806c0(8,0x69,0x41,"external/openssl/crypto/objects/obj_dat.c",0xd4);
LAB_0045bb8c:
  FUN_00452f80(puVar3,"external/openssl/crypto/objects/obj_dat.c",0xd7);
  FUN_00452f80(puVar7,"external/openssl/crypto/objects/obj_dat.c",0xd7);
  FUN_00452f80(0,"external/openssl/crypto/objects/obj_dat.c",0xd7);
  FUN_00452f80(puVar2,"external/openssl/crypto/objects/obj_dat.c",0xd7);
  FUN_003dffa0(plVar1);
  return 0;
}


