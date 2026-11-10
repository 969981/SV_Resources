/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c5da0; name: FUN_024c5da0
 */


void FUN_024c5da0(undefined1 *param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar2 = DAT_0484efe8;
  if ((((1 < *param_3) ||
       (puVar4 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar4 = (undefined8 *)PTR_DAT_047d5150,
     iVar3 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)((long)puVar4 + 0x38) = 0;
    *(undefined8 *)((long)puVar4 + 0x20) = 0;
    *(undefined8 *)((long)puVar4 + 0x28) = 0;
    *(undefined8 *)((long)puVar4 + 0x10) = 0;
    *(undefined8 *)((long)puVar4 + 0x18) = 0;
    *puVar4 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  uStack_78 = puVar4[1];
  local_80 = *puVar4;
  uVar6 = puVar4[3];
  uVar5 = puVar4[2];
  uStack_58 = puVar4[5];
  local_60 = puVar4[4];
  uStack_48 = puVar4[7];
  uStack_50 = puVar4[6];
  puVar1 = PTR_LAB_047dee60;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  local_40 = FUN_024c8b04(param_2,puVar1,0,&local_80);
  *param_1 = 1;
  uStack_30 = uVar5;
  uStack_28 = uVar6;
  FUN_024c863c(param_1 + 8,local_40);
  return;
}


