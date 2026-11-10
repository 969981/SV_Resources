/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e7258; name: FUN_034e7258
 */


void FUN_034e7258(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  
  FUN_03514184(PTR_DAT_047e6970);
  FUN_034ecacc();
  puVar5 = PTR_DAT_047e6fe8;
  if (PTR_DAT_047e6fe8[0x13] == '\x01') {
    nn::os::FinalizeEvent((EventType *)PTR_DAT_047e6fe8);
  }
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  puVar4 = PTR_DAT_047e2fd0;
  *(undefined8 *)puVar5 = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5 = PTR_DAT_047e71d0;
  plVar3 = DAT_048b0740;
  while (plVar3 != (long *)0x0) {
    DAT_048b0740 = (long *)plVar3[0x3c];
    if (DAT_048b0740 == (long *)0x0) {
      DAT_048b0738 = 0;
      DAT_048b0740 = (long *)0x0;
    }
    DAT_048b0730 = DAT_048b0730 + -1;
    (**(code **)*plVar3)(plVar3,0,1);
    if (*(long **)puVar5 != (long *)0x0) {
      plVar7 = (long *)0x0;
      plVar6 = *(long **)puVar5;
      do {
        plVar2 = (long *)*plVar6;
        if ((long *)plVar6[1] == plVar3) {
          plVar1 = (long *)puVar5;
          if (*(long **)puVar5 != plVar6) {
            plVar1 = plVar7;
          }
          *plVar1 = (long)plVar2;
          if (*(long **)(puVar5 + 8) == plVar6) {
            *(long **)(puVar5 + 8) = plVar7;
          }
          if ((plVar6 < *(long **)(puVar5 + 0x18)) ||
             (*(long **)(puVar5 + 0x18) + (ulong)*(uint *)(puVar5 + 0x20) * 3 <= plVar6)) {
            (**(code **)(puVar4 + 0x30))(5);
          }
          else {
            *plVar6 = *(long *)(puVar5 + 0x10);
            *(long **)(puVar5 + 0x10) = plVar6;
          }
          *(int *)(puVar5 + 0x24) = *(int *)(puVar5 + 0x24) + -1;
        }
        else {
          plVar7 = plVar6;
        }
        plVar6 = plVar2;
      } while (plVar2 != (long *)0x0);
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,0);
    (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(puVar4 + 0x30))(0,plVar3);
    plVar3 = DAT_048b0740;
  }
  DAT_048b0730 = 0;
  DAT_048b0738 = 0;
  DAT_048b0740 = (long *)0x0;
  FUN_034e7470(&DAT_048b0760);
  if (DAT_048b07c0 != 0) {
    DAT_048b07c8 = 0;
    (**(code **)(puVar4 + 0x30))(0);
    DAT_048b07c0 = 0;
    DAT_048b07cc = 0;
  }
  if (DAT_048b07b0 != 0) {
    DAT_048b07b8 = 0;
    (**(code **)(puVar4 + 0x30))(0);
    DAT_048b07b0 = 0;
    DAT_048b07bc = 0;
  }
  return;
}


