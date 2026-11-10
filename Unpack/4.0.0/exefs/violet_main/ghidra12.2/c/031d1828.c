/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d1828; name: FUN_031d1828
 */


void FUN_031d1828(undefined8 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  byte local_80 [2];
  undefined2 local_7e;
  long local_78;
  long lStack_70;
  long local_68;
  
  if ((*(ushort *)(param_1 + 3) & 0xc000) != 0x8000) {
    plVar5 = (long *)param_1[1];
    do {
      plVar4 = plVar5;
      if (plVar4 == (long *)0x0) {
        plVar5 = (long *)*param_1;
        lVar3 = tpidr_el0;
        if (plVar5 == (long *)0x0) {
          lVar6 = *(long *)(lVar3 + 0x1000b8);
          if (lVar6 == 0) {
            lVar6 = FUN_00e5d3b4();
            *(long *)(lVar3 + 0x1000b8) = lVar6;
          }
          plVar5 = *(long **)(lVar6 + 0x508);
          if (plVar5 == (long *)0x0) {
            if (lVar6 == 0) {
              lVar6 = FUN_00e5d3b4();
              *(long *)(lVar3 + 0x1000b8) = lVar6;
            }
            plVar5 = *(long **)(*(long *)(lVar6 + 0x3d0) + 0x20);
          }
        }
        plVar4 = (long *)param_1[1];
        while (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(plVar4 + 3);
          uVar2 = *(undefined2 *)((long)plVar4 + 0x16);
          lVar6 = *(long *)(lVar3 + 0x1000b8);
          if (lVar6 == 0) {
            lVar6 = FUN_00e5d3b4();
            *(long *)(lVar3 + 0x1000b8) = lVar6;
          }
          local_78 = *(long *)(lVar6 + 0x3d8);
          lStack_70 = local_78 + (ulong)bVar1 * 0xe8 + 0x28;
          local_68 = DAT_04883ee8 + (ulong)bVar1 * 0x210 + 0x18;
          lVar6 = *plVar4;
          local_80[0] = bVar1;
          local_7e = uVar2;
          if (((*(byte *)((long)plVar4 + 0x19) >> 3 & 1) != 0) &&
             ((*(byte *)((long)plVar4 + (ulong)*(ushort *)(plVar4 + 2) + 0x18) & 1) != 0)) {
            FUN_031d1a2c((long)plVar4 + (ulong)*(ushort *)(plVar4 + 2),local_80,
                         *(undefined1 *)((long)param_1 + 0x1a));
          }
          (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,*(ushort *)(plVar4 + 1) & 0x7fff);
          plVar4 = (long *)lVar6;
        }
                    /* WARNING: Could not recover jumptable at 0x031d19e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))(plVar5,param_1,*(ushort *)(param_1 + 3) & 0x3fff);
        return;
      }
      plVar5 = (long *)*plVar4;
    } while ((((*(byte *)((long)plVar4 + 0x19) >> 3 & 1) == 0) ||
             ((*(byte *)((long)plVar4 + (ulong)*(ushort *)(plVar4 + 2) + 0x18) >> 1 & 1) == 0)) ||
            ((*(byte *)((long)plVar4 + (ulong)*(ushort *)(plVar4 + 2) + 0x10) >> 1 & 1) != 0));
  }
  return;
}


