/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00521fd4; name: FUN_00521fd4
 */


void FUN_00521fd4(long *param_1,undefined8 param_2,undefined1 param_3,byte param_4,
                 undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_00524ad8();
  puVar2 = auVar6._0_8_;
  puVar2[2] = param_6;
  if ((auVar6._8_8_ & 0xff) != 0) {
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    lVar5 = *param_1;
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00520d08(lVar5,0,0x10);
      }
      puVar3 = (undefined8 *)FUN_00520544(lVar5,0x10,PTR_LAB_047cdc00);
      *puVar3 = 0;
      puVar3[1] = lVar5;
    }
    *puVar2 = puVar3;
  }
  puVar4 = (uint *)*puVar2;
  uVar1 = *puVar4;
  if (uVar1 == puVar4[1]) {
    FUN_0053141c(puVar4,uVar1 + 1);
  }
  *(undefined4 *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 4) = param_5;
  *puVar4 = uVar1 + 1;
  return;
}


