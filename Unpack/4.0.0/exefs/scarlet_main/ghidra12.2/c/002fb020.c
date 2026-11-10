/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fb020; name: FUN_002fb020
 */


undefined8
FUN_002fb020(long param_1,long param_2,long param_3,byte param_4,long param_5,undefined8 *param_6,
            long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = 2;
  if (((param_1 != 0) && (param_3 != 0)) && (param_6 != (undefined8 *)0x0)) {
    if ((param_2 == 0) && ((param_4 & 1) != 0)) {
      uVar3 = 2;
    }
    else {
      puVar4 = (undefined8 *)FUN_0038c7b0(0xa0);
      FUN_0038db00(puVar4 + 0xd);
      *(bool *)(puVar4 + 0xc) = param_5 == 0;
      puVar4[0x11] = 0;
      *(byte *)(puVar4 + 6) = param_4 & 1;
      *(undefined1 *)((long)puVar4 + 0x31) = 0;
      if (param_2 == 0) {
        FUN_00367020(&local_70);
      }
      else {
        FUN_003673f0(param_2);
      }
      puVar4[8] = param_5;
      *(undefined1 *)((long)puVar4 + 0x32) = 0;
      puVar4[3] = uStack_68;
      puVar4[2] = local_70;
      puVar4[5] = uStack_58;
      puVar4[4] = uStack_60;
      uVar3 = FUN_0038ccb0(param_3);
      puVar4[7] = uVar3;
      uVar5 = FUN_00305470(param_1);
      uVar3 = 0;
      puVar4[9] = uVar5;
      lVar1 = 0x20000;
      if (param_7 != 0) {
        lVar1 = param_7;
      }
      puVar4[0x13] = lVar1;
      puVar2 = &DAT_044942b0;
      if (*(char *)(puVar4 + 0xc) != '\0') {
        puVar2 = &DAT_04494270;
      }
      *puVar4 = puVar2;
      *param_6 = puVar4;
    }
  }
  return uVar3;
}


