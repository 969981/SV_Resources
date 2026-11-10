/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ace48; name: FUN_007ace48
 */


void FUN_007ace48(undefined8 param_1,long *param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar2 = local_50;
  if (param_3 != (ushort *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x20))();
    if (uVar1 <= param_4) {
      *(ushort *)(param_2 + 1) = *param_3 >> 8 | *param_3 << 8;
      *(char *)((long)param_2 + 10) = (char)param_3[1];
      *(ushort *)((long)param_2 + 0xc) =
           *(ushort *)((long)param_3 + 3) >> 8 | *(ushort *)((long)param_3 + 3) << 8;
      *(undefined1 *)((long)param_2 + 0xe) = *(undefined1 *)((long)param_3 + 5);
      *(char *)((long)param_2 + 0xf) = (char)param_3[3];
      *(undefined1 *)(param_2 + 2) = *(undefined1 *)((long)param_3 + 7);
      *(char *)((long)param_2 + 0x11) = (char)param_3[4];
      *(undefined1 *)((long)param_2 + 0x12) = *(undefined1 *)((long)param_3 + 9);
      *(char *)((long)param_2 + 0x13) = (char)param_3[5];
      *(undefined1 *)((long)param_2 + 0x14) = *(undefined1 *)((long)param_3 + 0xb);
      *(char *)((long)param_2 + 0x15) = (char)param_3[6];
      *(undefined1 *)((long)param_2 + 0x16) = *(undefined1 *)((long)param_3 + 0xd);
      *(char *)((long)param_2 + 0x17) = (char)param_3[7];
      *(undefined1 *)(param_2 + 3) = *(undefined1 *)((long)param_3 + 0xf);
      *(char *)((long)param_2 + 0x19) = (char)param_3[8];
      *(undefined1 *)((long)param_2 + 0x1a) = *(undefined1 *)((long)param_3 + 0x11);
      *(char *)((long)param_2 + 0x1b) = (char)param_3[9];
      *(undefined1 *)((long)param_2 + 0x1c) = *(undefined1 *)((long)param_3 + 0x13);
      *(char *)((long)param_2 + 0x1d) = (char)param_3[10];
      *(bool *)((long)param_2 + 0x1f) = *(char *)((long)param_3 + 0x15) != '\0';
      *(char *)((long)param_2 + 0x1e) = (char)param_3[0xb];
      FUN_0078f1b0(local_40,param_2 + 4,(long)param_3 + 0x17,param_4 - 0x17);
      if (local_40[0] == 0) {
        FUN_0078f1b8(param_2 + 4);
        local_50[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      }
      else {
        piVar2 = local_40;
      }
      goto LAB_007acfb4;
    }
  }
  local_40[0] = 0x10407;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  piVar2 = local_40;
LAB_007acfb4:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


