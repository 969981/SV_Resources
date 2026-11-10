/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00532490; name: _INIT_55
 */


void _INIT_55(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  undefined6 uStack_30;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  
  puVar1 = PTR_DAT_047cdc80;
  *(undefined4 *)PTR_DAT_047cdc80 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar2 = PTR_LAB_047cdc88;
  FUN_00100190(PTR_LAB_047cdc88,puVar1,&PTR_LOOP_04483000);
  puVar1 = PTR_DAT_047cdc90;
  *(undefined4 *)PTR_DAT_047cdc90 = 1;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(ulong *)(puVar1 + 0x12) = CONCAT26(uStack_2a,uStack_30);
  *(undefined8 *)(puVar1 + 10) = local_38;
  *(ulong *)(puVar1 + 0x18) = CONCAT62(uStack_28,uStack_2a);
  FUN_00100190(puVar2,puVar1,&PTR_LOOP_04483000);
  puVar1 = PTR_DAT_047cdc98;
  *(undefined4 *)PTR_DAT_047cdc98 = 2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(ulong *)(puVar1 + 0x12) = CONCAT26(uStack_2a,uStack_30);
  *(undefined8 *)(puVar1 + 10) = local_38;
  *(ulong *)(puVar1 + 0x18) = CONCAT62(uStack_28,uStack_2a);
  FUN_00100190(puVar2,puVar1,&PTR_LOOP_04483000);
  return;
}


