/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342ea80; name: FUN_0342ea80
 */


void FUN_0342ea80(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  undefined **local_a8;
  undefined8 uStack_a0;
  long local_98 [2];
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  undefined1 auStack_70 [16];
  
  puVar3 = PTR_DAT_047e6e68;
  do {
    if (param_2 == param_3) {
      return;
    }
    lVar6 = *(long *)(param_1 + (ulong)param_2 * 0x10);
    iVar1 = *(int *)(lVar6 + 0x58);
    if (iVar1 == 0) {
      lVar4 = 0;
LAB_0342eafc:
      lVar7 = 0;
    }
    else {
      lVar4 = **(long **)(lVar6 + 0x50);
      if (iVar1 == 1) goto LAB_0342eafc;
      lVar7 = (*(long **)(lVar6 + 0x50))[1];
    }
    puVar8 = (uint *)(param_1 + (ulong)param_2 * 0x10 + 8);
    uVar5 = *puVar8;
    if ((uVar5 & 1) != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_047e6e78;
      local_88 = *(uint *)(puVar3 + 0xc);
      local_80 = *(undefined4 *)(puVar3 + 0x10);
      if (3 < local_88) {
        local_88 = 4;
      }
      local_a8 = &PTR_LAB_047bf638;
      uStack_a0 = 0x40c90fdb40000000;
      uStack_84 = 1;
      local_74 = 0x447a0000;
      local_78 = puVar3[0x18];
      local_77 = 0;
      local_98[0] = *(long *)(lVar4 + 0xa8) + 8;
      local_98[1] = 0;
      uStack_7c = uVar2;
      if ((iVar1 == 0) || (**(long **)(lVar6 + 0x50) != lVar4)) {
        FUN_03423e4c(auStack_70,lVar6,1);
        lVar4 = lVar6 + 0x628;
      }
      else {
        FUN_03423e4c(auStack_70,lVar6,0);
        lVar4 = lVar6 + 0x5f0;
      }
      FUN_03431b50(local_98,auStack_70,lVar4,uVar2,&local_a8);
      uVar5 = *puVar8;
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar2 = *(undefined4 *)PTR_DAT_047e6e78;
      local_88 = *(uint *)(puVar3 + 0xc);
      local_80 = *(undefined4 *)(puVar3 + 0x10);
      if (3 < local_88) {
        local_88 = 4;
      }
      local_a8 = &PTR_LAB_047bf638;
      uStack_a0 = 0x40c90fdb40000000;
      uStack_84 = 1;
      local_74 = 0x447a0000;
      local_78 = puVar3[0x18];
      local_77 = 0;
      local_98[0] = *(long *)(lVar7 + 0xa8) + 8;
      local_98[1] = 0;
      uStack_7c = uVar2;
      if ((*(int *)(lVar6 + 0x58) == 0) || (**(long **)(lVar6 + 0x50) != lVar7)) {
        FUN_03423e4c(auStack_70,lVar6,1);
        lVar6 = lVar6 + 0x628;
      }
      else {
        FUN_03423e4c(auStack_70,lVar6,0);
        lVar6 = lVar6 + 0x5f0;
      }
      FUN_03431b50(local_98,auStack_70,lVar6,uVar2,&local_a8);
    }
    param_2 = param_2 + 1;
  } while( true );
}


