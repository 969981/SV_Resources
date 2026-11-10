/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002dcac0; name: FUN_002dcac0
 */


undefined8 FUN_002dcac0(undefined8 *param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 local_38;
  
  if (3 < param_2) {
    return 0;
  }
  pcVar7 = (char *)*param_1;
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
  cVar1 = *pcVar7;
  if (cVar1 == '\x12') {
    uVar4 = FUN_002e5414(0,0,*(undefined2 *)(pcVar7 + 2));
LAB_002dcb7c:
    *param_1 = uVar4;
    FUN_002e4804(pcVar7);
LAB_002dcb88:
    uVar4 = 1;
  }
  else {
    if (cVar1 == '\v') {
      plVar5 = (long *)(pcVar7 + 8);
      if (1 < *(ushort *)(pcVar7 + 6)) {
        plVar5 = (long *)*plVar5;
      }
      local_38 = FUN_002e4590(*plVar5);
      uVar2 = FUN_002dcac0(&local_38,param_2 + 1);
      if ((uVar2 & 1) != 0) {
        uVar4 = FUN_002e5338(local_38,*(undefined2 *)(pcVar7 + 2),*(undefined4 *)(pcVar7 + 0x18));
        goto LAB_002dcb7c;
      }
LAB_002dcc44:
      FUN_002e4804(local_38);
    }
    else if ((cVar1 == '\x05') && (*(short *)(pcVar7 + 6) != 0)) {
      plVar5 = (long *)(pcVar7 + 8);
      if (*(short *)(pcVar7 + 6) == 1) {
        plVar6 = plVar5;
      }
      else {
        plVar6 = (long *)*plVar5;
      }
      local_38 = FUN_002e4590(*plVar6);
      uVar2 = FUN_002dcac0(&local_38,param_2 + 1);
      if ((uVar2 & 1) == 0) goto LAB_002dcc44;
      puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,(ulong)*(ushort *)(pcVar7 + 6) << 3);
      *puVar3 = local_38;
      uVar2 = (ulong)*(ushort *)(pcVar7 + 6);
      if (1 < *(ushort *)(pcVar7 + 6)) {
        uVar8 = 1;
        do {
          plVar6 = plVar5;
          if (1 < (uint)uVar2) {
            plVar6 = (long *)*plVar5;
          }
                    /* try { // try from 002dcbf8 to 002dcbfb has its CatchHandler @ 002dcc64 */
          uVar4 = FUN_002e4590(plVar6[uVar8]);
          puVar3[uVar8] = uVar4;
          uVar2 = (ulong)*(ushort *)(pcVar7 + 6);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
                    /* try { // try from 002dcc14 to 002dcc27 has its CatchHandler @ 002dcc60 */
      uVar4 = FUN_002e5308(puVar3,uVar2,*(undefined2 *)(pcVar7 + 2));
      *param_1 = uVar4;
      FUN_002e4804(pcVar7);
      if (puVar3 != (undefined8 *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar3);
      }
      goto LAB_002dcb88;
    }
    uVar4 = 0;
  }
  return uVar4;
}


