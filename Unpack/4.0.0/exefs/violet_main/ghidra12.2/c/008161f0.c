/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008161f0; name: FUN_008161f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008161f0(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_154 [4];
  undefined1 local_150 [8];
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined *local_130;
  undefined1 local_128;
  undefined2 local_127;
  undefined1 local_125 [197];
  int local_60 [5];
  undefined1 local_4c;
  undefined8 local_4b;
  undefined4 local_43;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  
  if (*(char *)(param_1 + 0x7c0) == '\x04') {
    uVar3 = FUN_0078b12c(param_3);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x7c8);
      local_4b = 0;
      local_43 = 0;
      local_3f = (undefined1)((ulong)uVar4 >> 0x38);
      local_3d = (undefined1)((ulong)uVar4 >> 0x28);
      local_3b = (undefined1)((ulong)uVar4 >> 0x18);
      local_3e = (undefined1)((ulong)uVar4 >> 0x30);
      local_38 = (undefined1)uVar4;
      local_3a = (undefined1)((ulong)uVar4 >> 0x10);
      local_37 = (undefined1)((ushort)*(undefined2 *)(param_1 + 2000) >> 8);
      local_3c = (undefined1)((ulong)uVar4 >> 0x20);
      local_39 = (undefined1)((ulong)uVar4 >> 8);
      local_36 = (undefined1)*(undefined2 *)(param_1 + 2000);
      local_150 = (undefined1  [8])((ulong)(uint)local_150._4_4_ << 0x20);
      local_35 = (undefined1)((ulong)param_4 >> 8);
      local_60[0] = 0;
      local_4c = param_2;
      local_34 = (char)param_4;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_150 | 4),(Result *)local_60);
      FUN_00cbd7c0(local_60,local_150);
      puVar2 = PTR_DAT_047d0c98;
      if (local_60[0] == 0) {
        local_130 = PTR_DAT_047d0c98 + 0x68;
        puStack_148 = &local_128;
        local_150 = (undefined1  [8])(PTR_DAT_047d0c98 + 0x10);
        local_140 = 0xc0;
        local_128 = 0;
        lVar5 = 0;
        puVar6 = (undefined8 *)local_150;
        do {
          *(undefined2 *)((long)puVar6 + 0x29) = 0;
          lVar1 = lVar5 + 4;
          *(undefined1 *)((long)puVar6 + 0x2b) = 0;
          puVar6 = (undefined8 *)((long)local_150 + lVar1);
          local_125[lVar5 + 1] = 0;
          lVar5 = lVar1;
        } while (lVar1 != 0xc0);
        uStack_13c = 0;
        local_138 = 0;
        FUN_0078a4fc(param_3,local_150);
        FUN_007929a0(local_150,*(undefined8 *)(param_1 + 0x6f0),&local_4c,0x19,param_3,auStack_154);
        FUN_018ff39c(local_60,local_150);
        local_130 = puVar2 + 0x68;
        local_150 = (undefined1  [8])(puVar2 + 0x10);
        puStack_148 = &local_128;
        local_140 = 0xc0;
        local_128 = 0;
        lVar5 = 0;
        puVar6 = (undefined8 *)local_150;
        do {
          *(undefined2 *)((long)puVar6 + 0x29) = 0;
          lVar1 = lVar5 + 4;
          *(undefined1 *)((long)puVar6 + 0x2b) = 0;
          puVar6 = (undefined8 *)((long)local_150 + lVar1);
          local_125[lVar5 + 1] = 0;
          lVar5 = lVar1;
        } while (lVar1 != 0xc0);
        uStack_13c = 0;
        local_138 = 0;
        FUN_0078a4fc(param_3,local_150);
      }
    }
  }
  return;
}


