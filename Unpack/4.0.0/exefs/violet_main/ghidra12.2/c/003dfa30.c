/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003dfa30; name: FUN_003dfa30
 */


int FUN_003dfa30(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_80 [80];
  
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    iVar1 = FUN_003e8f00(param_1,&DAT_03c08ca3,4);
  }
  else {
    iVar1 = FUN_0045c520(auStack_80,0x50,param_2,0);
    if (iVar1 < 0x50) {
      if (iVar1 < 1) {
        iVar2 = FUN_003e8f00(param_1,"<INVALID>",9);
        iVar1 = FUN_003e6840(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14)
                            );
        iVar1 = iVar1 + iVar2;
      }
      else {
        FUN_003e8f00(param_1,auStack_80,iVar1);
      }
    }
    else {
      puVar3 = (undefined1 *)
               FUN_00452c30((long)(iVar1 + 1),"external/openssl/crypto/asn1/a_object.c",0xc2);
      if (puVar3 == (undefined1 *)0x0) {
        FUN_004806c0(0xd,0x7e,0x41,"external/openssl/crypto/asn1/a_object.c",0xc3);
        iVar1 = -1;
      }
      else {
        FUN_0045c520(puVar3,iVar1 + 1,param_2,0);
        FUN_003e8f00(param_1,puVar3,iVar1);
        if (puVar3 != auStack_80) {
          FUN_00452f80(puVar3,"external/openssl/crypto/asn1/a_object.c",0xcf);
        }
      }
    }
  }
  return iVar1;
}


