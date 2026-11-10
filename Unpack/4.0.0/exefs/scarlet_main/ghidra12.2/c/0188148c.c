/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188148c; name: FUN_0188148c
 */


void FUN_0188148c(int *param_1,int *param_2)

{
  *param_1 = *param_1 + *param_2;
  *(char *)(param_1 + 1) = (char)param_1[1] + (char)param_2[1];
  *(char *)((long)param_1 + 5) = *(char *)((long)param_1 + 5) + *(char *)((long)param_2 + 5);
  *(char *)((long)param_1 + 6) = *(char *)((long)param_1 + 6) + *(char *)((long)param_2 + 6);
  *(char *)((long)param_1 + 7) = *(char *)((long)param_1 + 7) + *(char *)((long)param_2 + 7);
  *(char *)(param_1 + 2) = (char)param_1[2] + (char)param_2[2];
  *(char *)((long)param_1 + 9) = *(char *)((long)param_1 + 9) + *(char *)((long)param_2 + 9);
  *(char *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) + *(char *)((long)param_2 + 10);
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 0xb);
  }
  if ((char)param_2[3] == '\0') {
    *(undefined1 *)((long)param_1 + 0xd) = 0;
  }
  param_1[4] = param_1[4] + param_2[4];
  *(char *)(param_1 + 5) = (char)param_1[5] + (char)param_2[5];
  *(char *)((long)param_1 + 0x15) =
       *(char *)((long)param_1 + 0x15) + *(char *)((long)param_2 + 0x15);
  *(char *)((long)param_1 + 0x16) =
       *(char *)((long)param_1 + 0x16) + *(char *)((long)param_2 + 0x16);
  *(char *)((long)param_1 + 0x17) =
       *(char *)((long)param_1 + 0x17) + *(char *)((long)param_2 + 0x17);
  *(char *)(param_1 + 6) = (char)param_1[6] + (char)param_2[6];
  *(char *)((long)param_1 + 0x19) =
       *(char *)((long)param_1 + 0x19) + *(char *)((long)param_2 + 0x19);
  *(char *)((long)param_1 + 0x1a) =
       *(char *)((long)param_1 + 0x1a) + *(char *)((long)param_2 + 0x1a);
  if (*(char *)((long)param_1 + 0x1b) == '\0') {
    *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)param_2 + 0x1b);
  }
  if ((char)param_2[7] == '\0') {
    *(undefined1 *)((long)param_1 + 0x1d) = 0;
  }
  param_1[8] = param_1[8] + param_2[8];
  *(char *)(param_1 + 9) = (char)param_1[9] + (char)param_2[9];
  *(char *)((long)param_1 + 0x25) =
       *(char *)((long)param_1 + 0x25) + *(char *)((long)param_2 + 0x25);
  *(char *)((long)param_1 + 0x26) =
       *(char *)((long)param_1 + 0x26) + *(char *)((long)param_2 + 0x26);
  *(char *)((long)param_1 + 0x27) =
       *(char *)((long)param_1 + 0x27) + *(char *)((long)param_2 + 0x27);
  *(char *)(param_1 + 10) = (char)param_1[10] + (char)param_2[10];
  *(char *)((long)param_1 + 0x29) =
       *(char *)((long)param_1 + 0x29) + *(char *)((long)param_2 + 0x29);
  *(char *)((long)param_1 + 0x2a) =
       *(char *)((long)param_1 + 0x2a) + *(char *)((long)param_2 + 0x2a);
  if (*(char *)((long)param_1 + 0x2b) == '\0') {
    *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)param_2 + 0x2b);
  }
  if ((char)param_2[0xb] == '\0') {
    *(undefined1 *)((long)param_1 + 0x2d) = 0;
  }
  param_1[0xc] = param_1[0xc] + param_2[0xc];
  *(char *)(param_1 + 0xd) = (char)param_1[0xd] + (char)param_2[0xd];
  *(char *)((long)param_1 + 0x35) =
       *(char *)((long)param_1 + 0x35) + *(char *)((long)param_2 + 0x35);
  *(char *)((long)param_1 + 0x36) =
       *(char *)((long)param_1 + 0x36) + *(char *)((long)param_2 + 0x36);
  *(char *)((long)param_1 + 0x37) =
       *(char *)((long)param_1 + 0x37) + *(char *)((long)param_2 + 0x37);
  *(char *)(param_1 + 0xe) = (char)param_1[0xe] + (char)param_2[0xe];
  *(char *)((long)param_1 + 0x39) =
       *(char *)((long)param_1 + 0x39) + *(char *)((long)param_2 + 0x39);
  *(char *)((long)param_1 + 0x3a) =
       *(char *)((long)param_1 + 0x3a) + *(char *)((long)param_2 + 0x3a);
  if (*(char *)((long)param_1 + 0x3b) == '\0') {
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
  }
  if ((char)param_2[0xf] == '\0') {
    *(undefined1 *)((long)param_1 + 0x3d) = 0;
  }
  param_1[0x10] = param_1[0x10] + param_2[0x10];
  *(char *)(param_1 + 0x11) = (char)param_1[0x11] + (char)param_2[0x11];
  *(char *)((long)param_1 + 0x45) =
       *(char *)((long)param_1 + 0x45) + *(char *)((long)param_2 + 0x45);
  *(char *)((long)param_1 + 0x46) =
       *(char *)((long)param_1 + 0x46) + *(char *)((long)param_2 + 0x46);
  *(char *)((long)param_1 + 0x47) =
       *(char *)((long)param_1 + 0x47) + *(char *)((long)param_2 + 0x47);
  *(char *)(param_1 + 0x12) = (char)param_1[0x12] + (char)param_2[0x12];
  *(char *)((long)param_1 + 0x49) =
       *(char *)((long)param_1 + 0x49) + *(char *)((long)param_2 + 0x49);
  *(char *)((long)param_1 + 0x4a) =
       *(char *)((long)param_1 + 0x4a) + *(char *)((long)param_2 + 0x4a);
  if (*(char *)((long)param_1 + 0x4b) == '\0') {
    *(undefined1 *)((long)param_1 + 0x4b) = *(undefined1 *)((long)param_2 + 0x4b);
  }
  if ((char)param_2[0x13] == '\0') {
    *(undefined1 *)((long)param_1 + 0x4d) = 0;
  }
  param_1[0x14] = param_1[0x14] + param_2[0x14];
  *(char *)(param_1 + 0x15) = (char)param_1[0x15] + (char)param_2[0x15];
  *(char *)((long)param_1 + 0x55) =
       *(char *)((long)param_1 + 0x55) + *(char *)((long)param_2 + 0x55);
  *(char *)((long)param_1 + 0x56) =
       *(char *)((long)param_1 + 0x56) + *(char *)((long)param_2 + 0x56);
  *(char *)((long)param_1 + 0x57) =
       *(char *)((long)param_1 + 0x57) + *(char *)((long)param_2 + 0x57);
  *(char *)(param_1 + 0x16) = (char)param_1[0x16] + (char)param_2[0x16];
  *(char *)((long)param_1 + 0x59) =
       *(char *)((long)param_1 + 0x59) + *(char *)((long)param_2 + 0x59);
  *(char *)((long)param_1 + 0x5a) =
       *(char *)((long)param_1 + 0x5a) + *(char *)((long)param_2 + 0x5a);
  if (*(char *)((long)param_1 + 0x5b) == '\0') {
    *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)((long)param_2 + 0x5b);
  }
  if ((char)param_2[0x17] == '\0') {
    *(undefined1 *)((long)param_1 + 0x5d) = 0;
    return;
  }
  return;
}


