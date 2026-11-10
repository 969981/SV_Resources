/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dfce4; name: FUN_007dfce4
 */


void FUN_007dfce4(undefined8 param_1,ushort *param_2,uint param_3,byte param_4,byte param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  if ((param_3 & 0xffff) == 0) {
    local_48[0] = 0x10407;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    piVar5 = local_48;
  }
  else {
    *param_2 = (ushort)param_3;
    *(byte *)(param_2 + 1) = param_4 & 1;
    *(byte *)((long)param_2 + 3) = param_5 & 1;
    uVar2 = FUN_0078a12c();
    puVar3 = (undefined4 *)FUN_007bf9f0(0x80,uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      FUN_0078f9d4();
      *(undefined8 *)(puVar3 + 9) = 0xffffffff;
      puVar3[0x18] = 0;
      *(undefined1 *)(puVar3 + 0x19) = 0;
      *(undefined8 *)(puVar3 + 0x1a) = 0;
      *(undefined1 *)(puVar3 + 0x1c) = 0;
      *(undefined8 *)(puVar3 + 0x1e) = 0;
      *(undefined8 *)(puVar3 + 0xc) = 0;
      *(undefined8 *)(puVar3 + 0xe) = 0;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x12) = 0;
      *(undefined8 *)(puVar3 + 0x14) = 0;
      *(undefined8 *)(puVar3 + 0x16) = 0;
    }
    *(undefined4 **)(param_2 + 4) = puVar3;
    FUN_007df328(local_48,puVar3,param_3,param_5 & 1);
    if (local_48[0] == 0) {
      FUN_007dfe54(param_2);
      uVar1 = *param_2;
      uVar7 = (ulong)(uVar1 - 1);
      uVar2 = FUN_0078a12c();
      puVar4 = (undefined8 *)FUN_007bf9f0(uVar7 * 0x30,uVar2);
      if ((puVar4 != (undefined8 *)0x0) && (uVar1 - 1 != 0)) {
        puVar6 = puVar4;
        do {
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
          FUN_00796584(puVar6);
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + 6;
        } while (uVar7 != 0);
      }
      *(undefined8 **)(param_2 + 0x10) = puVar4;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      local_58[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar5 = local_58;
    }
    else {
      piVar5 = local_48;
    }
  }
  FUN_00cbd7c0(param_1,piVar5);
  return;
}


