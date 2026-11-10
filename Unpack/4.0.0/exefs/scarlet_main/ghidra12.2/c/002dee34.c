/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dee34; name: FUN_002dee34
 */


undefined8 FUN_002dee34(uint *param_1,int param_2,int param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  char *pcVar11;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  if ((((param_3 == -1) || (param_2 <= param_3)) && (param_2 < 0x3e9)) && (param_3 < 0x3e9)) {
    if ((*(byte **)(param_1 + 8) != (byte *)0x0) && (**(byte **)(param_1 + 8) < 0x16)) {
      uVar2 = *param_1;
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x28);
      if (lVar5 != 0) {
        uVar1 = uVar2 ^ 0x40;
        if ((param_5 & 1) == 0) {
          uVar1 = uVar2;
        }
        FUN_002e4418(lVar5,10,uVar1);
      }
      *(int *)(lVar5 + 0x18) = param_3;
      *(int *)(lVar5 + 0x1c) = param_2;
      *(undefined2 *)(lVar5 + 6) = 1;
      pcVar11 = *(char **)(param_1 + 8);
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(pcVar11 + 0x10);
      if (((pcVar11 == (char *)0x0) ||
          (pcVar11[0x10] = '\0', pcVar11[0x11] = '\0', pcVar11[0x12] = '\0', pcVar11[0x13] = '\0',
          pcVar11[0x14] = '\0', pcVar11[0x15] = '\0', pcVar11[0x16] = '\0', pcVar11[0x17] = '\0',
          *pcVar11 != '\x14')) || (lVar10 = *(long *)(pcVar11 + 0x20), lVar10 == 0)) {
        plVar8 = (long *)(lVar5 + 8);
      }
      else {
        pcVar11[0x20] = '\0';
        pcVar11[0x21] = '\0';
        pcVar11[0x22] = '\0';
        pcVar11[0x23] = '\0';
        pcVar11[0x24] = '\0';
        pcVar11[0x25] = '\0';
        pcVar11[0x26] = '\0';
        pcVar11[0x27] = '\0';
        uVar6 = FUN_002e7144(lVar10);
        *(undefined8 *)(pcVar11 + 0x18) = uVar6;
        FUN_002e3684(lVar10 + 0x10,*(undefined8 *)(lVar10 + 0x18));
        FUN_0049e790(PTR_LAB_047cba48,lVar10);
        plVar8 = (long *)(lVar5 + 8);
        if (1 < *(ushort *)(lVar5 + 6)) {
          plVar8 = (long *)*plVar8;
        }
      }
      *plVar8 = (long)pcVar11;
      bVar3 = FUN_002e7540(lVar5);
      *(byte *)(lVar5 + 1) = bVar3 & 1;
      *(long *)(param_1 + 8) = lVar5;
      if ((1 < param_2) || (1 < param_3)) {
        local_80 = PTR_DAT_047cc8f0 + 0x10;
        uStack_50 = 0;
        local_58 = 0;
        local_48 = 0;
        uStack_60 = 0;
        local_68 = 0;
        local_44 = 1000000;
        uStack_70 = 0;
        local_78 = 0;
                    /* try { // try from 002defd8 to 002defeb has its CatchHandler @ 002df024 */
        iVar4 = FUN_002e3740(&local_80,lVar5,1000,1);
        if (iVar4 == 0) {
          puVar7 = *(undefined4 **)(param_1 + 6);
          *puVar7 = 9;
          uVar6 = *param_4;
          *(undefined8 *)(puVar7 + 4) = param_4[1];
          *(undefined8 *)(puVar7 + 2) = uVar6;
          FUN_002df038(&local_80);
          return 0;
        }
        FUN_002df038(&local_80);
      }
      return 1;
    }
    puVar7 = *(undefined4 **)(param_1 + 6);
    uVar9 = 8;
  }
  else {
    puVar7 = *(undefined4 **)(param_1 + 6);
    uVar9 = 9;
  }
  *puVar7 = uVar9;
  uVar6 = *param_4;
  *(undefined8 *)(puVar7 + 4) = param_4[1];
  *(undefined8 *)(puVar7 + 2) = uVar6;
  return 0;
}


