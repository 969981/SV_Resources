/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007accb4; name: FUN_007accb4
 */


void FUN_007accb4(undefined8 param_1,long *param_2,ushort *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_38;
  int local_34;
  
  puVar2 = local_60;
  if ((param_3 != (ushort *)0x0) && (param_4 != (int *)0x0)) {
    uVar1 = (**(code **)(*param_2 + 0x20))();
    if (uVar1 <= param_5) {
      *param_3 = *(ushort *)(param_2 + 1) >> 8 | *(ushort *)(param_2 + 1) << 8;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)((long)param_2 + 10);
      *(ushort *)((long)param_3 + 3) =
           *(ushort *)((long)param_2 + 0xc) >> 8 | *(ushort *)((long)param_2 + 0xc) << 8;
      *(undefined1 *)((long)param_3 + 5) = *(undefined1 *)((long)param_2 + 0xe);
      *(undefined1 *)(param_3 + 3) = *(undefined1 *)((long)param_2 + 0xf);
      *(char *)((long)param_3 + 7) = (char)param_2[2];
      *(undefined1 *)(param_3 + 4) = *(undefined1 *)((long)param_2 + 0x11);
      *(undefined1 *)((long)param_3 + 9) = *(undefined1 *)((long)param_2 + 0x12);
      *(undefined1 *)(param_3 + 5) = *(undefined1 *)((long)param_2 + 0x13);
      *(undefined1 *)((long)param_3 + 0xb) = *(undefined1 *)((long)param_2 + 0x14);
      *(undefined1 *)(param_3 + 6) = *(undefined1 *)((long)param_2 + 0x15);
      *(undefined1 *)((long)param_3 + 0xd) = *(undefined1 *)((long)param_2 + 0x16);
      *(undefined1 *)(param_3 + 7) = *(undefined1 *)((long)param_2 + 0x17);
      *(char *)((long)param_3 + 0xf) = (char)param_2[3];
      *(undefined1 *)(param_3 + 8) = *(undefined1 *)((long)param_2 + 0x19);
      *(undefined1 *)((long)param_3 + 0x11) = *(undefined1 *)((long)param_2 + 0x1a);
      *(undefined1 *)(param_3 + 9) = *(undefined1 *)((long)param_2 + 0x1b);
      *(undefined1 *)((long)param_3 + 0x13) = *(undefined1 *)((long)param_2 + 0x1c);
      *(undefined1 *)(param_3 + 10) = *(undefined1 *)((long)param_2 + 0x1d);
      *(bool *)((long)param_3 + 0x15) = *(char *)((long)param_2 + 0x1f) != '\0';
      *(undefined1 *)(param_3 + 0xb) = *(undefined1 *)((long)param_2 + 0x1e);
      FUN_0078f1a8(local_50,param_2 + 4,(long)param_3 + 0x17,&local_34,param_5 - 0x17);
      *param_4 = ((int)((long)param_3 + 0x17) + local_34) - (int)param_3;
      local_60[0] = 0;
      local_38 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_38);
      goto LAB_007ace28;
    }
  }
  local_50[0] = 0x10407;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  puVar2 = local_50;
LAB_007ace28:
  FUN_00cbd7c0(param_1,puVar2);
  return;
}


