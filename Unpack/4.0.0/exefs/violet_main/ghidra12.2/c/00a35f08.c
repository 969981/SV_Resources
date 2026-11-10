/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a35f08; name: FUN_00a35f08
 */


byte FUN_00a35f08(undefined4 param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  char *pcVar3;
  long *local_b0;
  char *local_a8 [5];
  undefined8 uStack_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  
  if (param_2 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 1;
    if ((DAT_048354d0 != (code *)0x0) && (DAT_04835550 != (code *)0x0)) {
      local_a8[0] = &DAT_cbf29ce484222645;
      local_a8[1] = "";
      local_a8[2] = (char *)0x0;
      local_a8[3] = (char *)0xc08bfae17a48c168;
      local_38 = 8;
      local_a8[4] = "a_su0201";
      uStack_80 = 8;
      local_78 = 0xc08bfde17a48c681;
      pcStack_70 = "a_su0202";
      local_68 = 8;
      uStack_60 = 0xc08bfce17a48c4ce;
      local_58 = "a_su0203";
      uStack_50 = 8;
      local_48 = 0xc08bffe17a48c9e7;
      pcStack_40 = "a_su0204";
      local_24 = param_1;
      (*DAT_048354d0)(&local_b0,&DAT_048354f0,&local_24,local_28,local_2c);
      if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00a360c0();
      }
      pcVar3 = local_a8[(ulong)param_2 * 3];
      local_24 = param_1;
      bVar2 = (*DAT_04835550)(&DAT_04835570,&local_24,local_28,local_2c);
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (local_b0 != (long *)0x0) {
        plVar1 = local_b0 + 6;
      }
      bVar2 = (char *)*plVar1 == pcVar3 & (bVar2 ^ 1);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
    }
  }
  return bVar2;
}


