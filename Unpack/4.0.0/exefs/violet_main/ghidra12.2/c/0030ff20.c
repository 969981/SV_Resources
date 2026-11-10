/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030ff20; name: FUN_0030ff20
 */


void FUN_0030ff20(undefined4 param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  bool bVar7;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  param_2 = param_2 & 0xffffffff;
  FUN_003670f0(&local_50,0x11);
  puVar4 = local_40;
  uVar5 = param_3[1] & 0xff;
  if (*param_3 != 0) {
    uVar5 = param_3[1];
  }
  if (uVar5 < 0xfffffff7) {
    iVar1 = (int)uVar5 + 8;
    bVar7 = local_50 != 0;
    puVar6 = (undefined1 *)((long)&uStack_48 + 2);
    puVar2 = (undefined1 *)((long)&uStack_48 + 1);
    if (bVar7) {
      puVar6 = local_40 + 1;
      puVar2 = local_40;
    }
    *puVar2 = (char)((uint)iVar1 >> 0x10);
    puVar2 = (undefined1 *)((long)&uStack_48 + 3);
    if (bVar7) {
      puVar2 = puVar4 + 2;
    }
    *puVar6 = (char)((uint)iVar1 >> 8);
    *puVar2 = (char)iVar1;
    puVar6 = (undefined1 *)((long)&uStack_48 + 5);
    puVar2 = (undefined1 *)((long)&uStack_48 + 4);
    if (bVar7) {
      puVar6 = puVar4 + 4;
      puVar2 = puVar4 + 3;
    }
    *puVar2 = 7;
    puVar2 = (undefined1 *)((long)&uStack_48 + 6);
    if (bVar7) {
      puVar2 = puVar4 + 5;
    }
    *puVar6 = 0;
    *puVar2 = 0;
    puVar6 = (undefined1 *)((long)&uStack_48 + 7);
    if (bVar7) {
      puVar6 = puVar4 + 6;
    }
    *puVar6 = 0;
    puVar3 = &local_40;
    if (bVar7) {
      puVar3 = (undefined8 *)(puVar4 + 7);
    }
    *(undefined1 *)puVar3 = 0;
    puVar6 = (undefined1 *)((long)&local_40 + 1);
    if (bVar7) {
      puVar6 = puVar4 + 8;
    }
    *puVar6 = 0;
    puVar6 = (undefined1 *)((long)&local_40 + 2);
    if (bVar7) {
      puVar6 = puVar4 + 9;
    }
    *puVar6 = (char)((uint)param_1 >> 0x18);
    puVar6 = (undefined1 *)((long)&local_40 + 3);
    if (bVar7) {
      puVar6 = puVar4 + 10;
    }
    *puVar6 = (char)((uint)param_1 >> 0x10);
    puVar6 = (undefined1 *)((long)&local_40 + 4);
    if (bVar7) {
      puVar6 = puVar4 + 0xb;
    }
    *puVar6 = (char)((uint)param_1 >> 8);
    puVar6 = (undefined1 *)((long)&local_40 + 5);
    if (bVar7) {
      puVar6 = puVar4 + 0xc;
    }
    *puVar6 = (char)param_1;
    puVar6 = (undefined1 *)((long)&local_40 + 6);
    if (bVar7) {
      puVar6 = puVar4 + 0xd;
    }
    *puVar6 = (char)(param_2 >> 0x18);
    puVar6 = (undefined1 *)((long)&local_40 + 7);
    if (bVar7) {
      puVar6 = puVar4 + 0xe;
    }
    *puVar6 = (char)(param_2 >> 0x10);
    puVar3 = &local_38;
    if (bVar7) {
      puVar3 = (undefined8 *)(puVar4 + 0xf);
    }
    *(char *)puVar3 = (char)(param_2 >> 8);
    puVar6 = (undefined1 *)((long)&local_38 + 1);
    if (bVar7) {
      puVar6 = puVar4 + 0x10;
    }
    *puVar6 = (char)param_2;
    puVar6 = (undefined1 *)((long)&local_38 + 2);
    if (bVar7) {
      puVar6 = puVar4 + 0x11;
    }
    puVar4 = (undefined1 *)((long)&uStack_48 + 1);
    if (local_50 != 0) {
      puVar4 = local_40;
    }
    uVar5 = uStack_48 & 0xff;
    if (local_50 != 0) {
      uVar5 = uStack_48;
    }
    if (puVar6 == puVar4 + uVar5) {
      uStack_68 = uStack_48;
      local_70 = local_50;
      uStack_58 = local_38;
      puStack_60 = local_40;
      FUN_003686e0(param_4,&local_70);
      lStack_88 = param_3[1];
      local_90 = *param_3;
      lStack_78 = param_3[3];
      lStack_80 = param_3[2];
      FUN_003686e0(param_4,&local_90);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


