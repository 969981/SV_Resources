/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ceaf0; name: FUN_003ceaf0
 */


long FUN_003ceaf0(long param_1,long *param_2,void *param_3,size_t param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = param_4 + 0x40;
  puVar1 = (undefined8 *)FUN_00452c30(lVar3,"external/openssl/ssl/statem/statem_lib.c",0x96a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_003c3950(param_1,0x50,0x229,0x41,"external/openssl/ssl/statem/statem_lib.c",0x96e);
    lVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xd0);
    uVar5 = *(undefined8 *)(lVar2 + 200);
    uVar4 = *(undefined8 *)(lVar2 + 0xb8);
    puVar1[1] = *(undefined8 *)(lVar2 + 0xc0);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    lVar2 = *(long *)(param_1 + 0xa8);
    uVar4 = *(undefined8 *)(lVar2 + 0x98);
    uVar6 = *(undefined8 *)(lVar2 + 0xb0);
    uVar5 = *(undefined8 *)(lVar2 + 0xa8);
    puVar1[5] = *(undefined8 *)(lVar2 + 0xa0);
    puVar1[4] = uVar4;
    puVar1[7] = uVar6;
    puVar1[6] = uVar5;
    memcpy(puVar1 + 8,param_3,param_4);
    *param_2 = (long)puVar1;
  }
  return lVar3;
}


