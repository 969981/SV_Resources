/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02571d60; name: FUN_02571d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02571d60(undefined8 param_1,code *param_2,ulong param_3)

{
  int iVar1;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  FUN_02571768(&local_28);
  if (local_28 == 0) {
    bVar3 = 1;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    (*param_2)();
    bVar3 = 0;
    uStack_38 = CONCAT17(extraout_var_13,
                         CONCAT16(extraout_var_12,
                                  CONCAT15(extraout_var_11,
                                           CONCAT14(extraout_var_10,
                                                    CONCAT13(extraout_var_09,
                                                             CONCAT12(extraout_var_08,
                                                                      CONCAT11(extraout_var_07,
                                                                               extraout_var_06))))))
                        );
    local_40 = CONCAT17(extraout_var_05,
                        CONCAT16(extraout_var_04,
                                 CONCAT15(extraout_var_03,
                                          CONCAT14(extraout_var_02,
                                                   CONCAT13(extraout_var_01,
                                                            CONCAT12(extraout_var_00,
                                                                     CONCAT11(extraout_var,
                                                                              extraout_b0)))))));
  }
  FUN_018d3d60(&local_28);
  iVar1 = -(uint)bVar3;
  bVar3 = (byte)iVar1;
  bVar4 = (byte)((uint)iVar1 >> 8);
  bVar5 = (byte)((uint)iVar1 >> 0x10);
  bVar6 = (byte)((uint)iVar1 >> 0x18);
  auVar2[0] = (byte)local_40 & ~bVar3;
  auVar2[1] = (byte)((ulong)local_40 >> 8) & ~bVar4;
  auVar2[2] = (byte)((ulong)local_40 >> 0x10) & ~bVar5;
  auVar2[3] = (byte)((ulong)local_40 >> 0x18) & ~bVar6;
  auVar2[4] = (byte)((ulong)local_40 >> 0x20) & ~bVar3;
  auVar2[5] = (byte)((ulong)local_40 >> 0x28) & ~bVar4;
  auVar2[6] = (byte)((ulong)local_40 >> 0x30) & ~bVar5;
  auVar2[7] = (byte)((ulong)local_40 >> 0x38) & ~bVar6;
  auVar2[8] = (byte)uStack_38 & ~bVar3;
  auVar2[9] = (byte)((ulong)uStack_38 >> 8) & ~bVar4;
  auVar2[10] = (byte)((ulong)uStack_38 >> 0x10) & ~bVar5;
  auVar2[0xb] = (byte)((ulong)uStack_38 >> 0x18) & ~bVar6;
  auVar2[0xc] = (byte)((ulong)uStack_38 >> 0x20) & ~bVar3;
  auVar2[0xd] = (byte)((ulong)uStack_38 >> 0x28) & ~bVar4;
  auVar2[0xe] = (byte)((ulong)uStack_38 >> 0x30) & ~bVar5;
  auVar2[0xf] = (byte)((ulong)uStack_38 >> 0x38) & ~bVar6;
  return auVar2;
}


